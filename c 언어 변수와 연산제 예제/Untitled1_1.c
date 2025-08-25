#include <stdio.h>
//#include <stdafx.h>

int main(void)
{
	int age, score; //정수 변수 선언 
	print("나이가 어떻게 되세요?:");
	scanf("%d\n",&age);
	print("점수는?:");
	scanf("%d\n",&score);
	printf("my age :%d\n",age);
	printf("%d is my point\n",score);
	printf("Good\nmorning\neverybody");
	return 0;
}
