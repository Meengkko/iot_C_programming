#include <stdio.h>
int main(){
	unsigned char cName[] = "ABC°¡DE³ª´ÙÐÝ";
	unsigned char cTmp[3];
	int i, nAscii=0, nNonAscii=0;

	printf("sizeof(cName) = %d\n", sizeof(cName));
	for(i=0;cName[i]!='\0';){
		if(cName[i] < 0x80) // ASCII
		{
			nAscii++;
			printf("cName[%d]=%c, %x\n",i,cName[i],cName[i]);
			i++;
		}else{
			nNonAscii++;
			cTmp[0]=cName[i];
			cTmp[1]=cName[i+1];
			cTmp[2]='\0';
			printf("cName[%d]: %s, %x, %x\n",i,cTmp,cName[i],cName[i+1]);
			i = i + 2;
		}
	}
	printf("nAscii=%d\n",nAscii);
	printf("nNonAscii=%d\n",nNonAscii);
	return 0;
}
