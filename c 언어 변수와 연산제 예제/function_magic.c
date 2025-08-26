#include <stdio.h>

int Add(int i, int j){
	return i+j;
}

int Sub(int i, int j){
	return i-j;
}

int Mul(int i, int j){
	return i*j;
}

float Div(int i, int j){
	return (double)i/(double)j;
}

int main(void){
	printf("%d\n",Add(5,6));
	printf("%d\n",Sub(5,6));
	printf("%d\n",Mul(5,6));
	printf("%f\n",Div(5,6));
}
