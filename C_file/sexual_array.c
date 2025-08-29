#include <stdio.h>
char * title[] = {"number","name","kor","eng","mat"};
char* name[] = {"pack","kim","sion","junhyc","yee"};
int kor[] = {10,20,30,40,50};
int eng[] = {50,60,80,30,20};
int mat[] = {46,96,85,12,30};
int main(){
	printf("sexual array\n");
	int i;
	int j;
	for(i = 0; i<10; i++){
		if(i==0){//title line
			for(j = 0; j<5; j++)printf("%s	",title[j]);
			printf("\n");
		}
		printf("%2d	%s	%3d	%3d	%3d\n",i , name[i],kor[i],eng[i],mat[i]);
	}
}
