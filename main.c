#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	FILE* fp; //fp�� ���� �̸� 
	char str[100];
	int i;
	//1. open file
	fp = fopen("sample.txt", "w"); //����Ҷ��� ������ 
	
	
	//2. write file
	for (i = 0; i<3; i++)
	{
	
	//2-1. print " input a word "
	printf("input a word : "); 
	//2-2. scanf a string 
	scanf("%s", str); //�� ��ü�� �����ͱ� ������ &���� �ʿ� ���� 
	//2-3. fprintf()
	fprintf(fp, "%s\n", str); 
	}
	
	//3. close file
	fclose(fp);
	system("PAUSE");
	return 0;
}
