#include <stdio.h>
#include <conio.h>



	int rectangle(int a, int b);
	double triangle(int a, int b);

int main(void){
	int x, y;

	
	printf("(x,y)?"); scanf("%d %d",&x,&y);
	
	int r = rectangle(x, y);
	double t = triangle(x, y);
	
	
	printf("�غ��� %d�̰� ���̰� %d�� �簢���� ������ %d �̴�\n",x,y,r);
	printf("�غ��� %d�̰� ���̰� %d�� �ﰢ���� ������ %f �̴� ",x,y,t);
}

int rectangle(int a, int b){
	return a*b;
}

double triangle(int a, int b){
	double xy = (double)a*(double)b/2.0;
	return xy;
}


