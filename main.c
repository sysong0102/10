#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	FILE* fp; //fp�� ���� �̸� 
	char c;
	int i;

	fp = fopen("sample.txt", "r");
	
	if (fp == NULL) //������ ���� ��� �������� �� �ְ� 
	{
		printf("failed to open\n");
		return 0;
	}
	
	while ( (c = fgetc(fp)) != EOF) //�ѱ��� ������ �������� �ƴϸ� 
	{
		putchar(c);	//�ѱ��� ��� 
	}
	
	fclose(fp); 
	
	system("PAUSE");
	return 0;
}
