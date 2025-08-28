#include <stdio.h>

int main(void){
	int n=5.25; // 소수부의 손실
	float d=3.0; // 값의 표현이 넓은 범위로의 변환
	char c=129; // 상위 비트의 손실
	
	printf("n: %d\nd: %lf\nc: %d\n", n, d, c);
}
