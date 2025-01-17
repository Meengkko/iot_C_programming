// Socket Client
// 아래 라이브러리가 프로젝트 lib에 추가되어야 함
// Ws2_32.lib;Mswsock.lib;AdvApi32.lib

#include <stdio.h>
#include <stdlib.h>
#include <winsock2.h>
#include <string.h>
#pragma warning (disable:4996)

void ErrorHandling(char* message);

int main(int argc, char* argv[]) {
	WSADATA wsaData;
	SOCKET hSocket;
	SOCKADDR_IN servAddr;

	char message[30];
	int strLen;
	
	system("chcp 949");

	if (argc != 3) {
		printf("Usage : %s <IP> <port>\n", argv[0]);
		exit(1);
	}

	puts("처음 도전하는 시스템 프로그래밍!");
	puts("소켓 클라이언트 ver1.0\n");
	printf("서버 접속 IP: %s, 접속 포트: %s", argv[1], argv[2]);

	if (WSAStartup(MAKEWORD(2, 2), &wsaData) != 0) {
		ErrorHandling("WSAStartup() error!");
	}

	hSocket = socket(PF_INET, SOCK_STREAM, 0);
	if (hSocket == INVALID_SOCKET) {
		ErrorHandling("hSocket() error!");
	}
	memset(&servAddr, 0, sizeof(servAddr));
	servAddr.sin_family = AF_INET;
	servAddr.sin_addr.s_addr = inet_addr(argv[1]);
	servAddr.sin_port = htons(atoi(argv[2]));

	if (connect(hSocket, (SOCKADDR*)&servAddr, sizeof(servAddr)) == SOCKET_ERROR) {
		ErrorHandling("connect() error!");
	}

	puts("Connection 완료!");
	puts("이제 서버와 통신을 시작합니다.");
	puts("통신을 종료하려면 bye를 입력하세요.");

	while (1) {
		printf("Client] ");
		gets(message);
		send(hSocket, message, sizeof(message), 0);
		strLen = recv(hSocket, message, sizeof(message) - 1, 0);
		if (strLen == -1) {
			ErrorHandling("read() error!");
		}
		printf("\nMessage from server: %s \n", message);
		if (!strcmp(message, "bye")) {
			break;
		}
	}
	closesocket(hSocket);
	WSACleanup();
	return 0;
}

void ErrorHandling(char* message) {
	fputs(message, stderr);
	fputc('\n', stderr);
	exit(1);
}
