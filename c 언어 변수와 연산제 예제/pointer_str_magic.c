#include <stdio.h>
char str[] = "good afternoon";//��� ���� 
int main(){
	
	char b[100];
	strcpy(b,str);//���� �������� ���� 
	char *p = b;//p�� str�� ������ b�� �ּ� 
	
	printf("before : \"%s\"",str);
	*(p+5) = '_';
	printf("\nafter : \"%s\"",p);
}
