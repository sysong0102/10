#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	char src[30] = "happy C programming"; //30글자는 아님  
	
	printf("문자열 \"%s\" 의 길이: %i\n ", src, strlen(src));
	
	
	system("PAUSE");
	return 0;
}
