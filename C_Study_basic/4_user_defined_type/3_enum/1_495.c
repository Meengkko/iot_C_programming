#include <stdio.h>
#include <windows.h>
#pragma warning (disable:4996)

typedef enum {
	Do=1, Re=2, Mi=3, Fa=4, So=5, La=6, Ti=7
}Syllable;

void sound(Syllable sy) {
	switch (sy) {
	case Do:
		puts("���� �Ͼ� ������ ��"); return;
	case Re:
		puts("���� �ձ� ���ڵ� ��"); return;
	case Mi:
		puts("�̴� �Ķ� �̳��� �� ��"); return;
	case Fa:
		puts("�Ĵ� ���� �Ķ��� �� ��"); return;
	case So:
		puts("���� ���� �ֹ�� �� �� ��"); return;
	case La:
		puts("��� �������~ �� �� �� ��"); return;
	case Ti:
		puts("�ô� ���� �ó��� �� �� �� ��"); return;
	}
	puts("�� �Բ� �θ���~ �������� �ֶ�õ� �� ��~ §~");

}

void main() {

	Syllable tone;

	system("chcp 949");

	for (tone = Do; tone <= Ti; tone += 1) {
		sound(tone);
	}
	sound(0);
}
