#include <stdio.h>
char str[] = "good afternoon";//상수 영역 
int main(){
	
	char b[100];
	strcpy(b,str);//가변 영역으로 복사 
	char *p = b;//p는 str를 복사한 b의 주소 
	
	printf("before : \"%s\"",str);
	*(p+5) = '_';
	printf("\nafter : \"%s\"",p);
}
