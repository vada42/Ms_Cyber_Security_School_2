#include <stdio.h>
char * title[] = {"number","name","kor","eng","mat"};
char* name[] = {"pack","kim","sion","junhyc","yee"};
int kor[] = {10,20,30,40,50};
int eng[] = {50,60,80,30,20};
int mat[] = {46,96,85,12,30};
void swap(int *i, int *j){int k =*i; *i = *j; *j = k;}

int main(int n, char **s){//command line interface// **s == *s[] n input length
	int start = 0;
	int end = 5; //default
	int i;
	int j;
	
	if(n >1){//"1","2"
	        if(strcmp(s[1], "--help")==0){
	        printf("\n sexual_array[number] [--help]\n");
	        printf("input number than u can see grades of the student with that number\n");
	        exit(1);
	        }
		start = atoi(s[1])-1;// str-->number s[1][0] - '0';//str '1''2''3''4 --> '0''1''2''3''4'
		end = start+1 ;
	}
	
    
	for(int i = start; i<end; i++){
		if(i==start){
		      for(j = 0; j<5; j++)printf("%s	",title[j]);
			printf("\n");
		}
	        printf("%2d	%s	%3d	%3d	%3d\n",i , name[i],kor[i],eng[i],mat[i]);
	}
}
	//printf("sexual array\n");
	/*
	for(i = 0; i<10; i++){
		if(i==0){//title line
			for(j = 0; j<5; j++)printf("%s	",title[j]);
			printf("\n");
		}
		printf("%2d	%s	%3d	%3d	%3d\n",i , name[i],kor[i],eng[i],mat[i]);
	}*/
