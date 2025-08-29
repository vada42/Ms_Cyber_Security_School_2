#include <stdio.h>
char *name[] = {"pack","kim","sion","junhyc","yee"};
int kor[] = {10,20,30,40,50};
int eng[] = {60,70,80,90,50};
int mat[] = {70,50,60,40,30};
int main(){
	int i;
	for(i = 0; i<10; i++){
		printf("%2d %s %3d %3d %3d  \n",i , name[i],kor[i], eng[i], mat[i]);
	}
}
