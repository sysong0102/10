#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	char src[] = "The worst things to eat before you sleep"; //문자열을 직접 설정했기 때문에 []안에 빈칸으로 두면 문자열에 맞춰서 자동으로 배정됨 
	char dst[100];
	
	strcpy(dst, src); //이름만 심플하게 넣으면 된다.  
	
	printf("copied string : %s\n", dst);
	
	
	system("PAUSE");
	return 0;
}
