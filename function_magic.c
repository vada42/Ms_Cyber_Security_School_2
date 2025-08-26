#include <stdio.h>
#include <conio.h>



	int rectangle(int a, int b);
	double triangle(int a, int b);

int main(void){
	int x, y;

	
	printf("(x,y)?"); scanf("%d %d",&x,&y);
	
	int r = rectangle(x, y);
	double t = triangle(x, y);
	
	
	printf("밑변이 %d이고 높이가 %d인 사각형의 면적은 %d 이다\n",x,y,r);
	printf("밑변이 %d이고 높이가 %d인 삼각형의 면적은 %f 이다 ",x,y,t);
}

int rectangle(int a, int b){
	return a*b;
}

double triangle(int a, int b){
	double xy = (double)a*(double)b/2.0;
	return xy;
}


