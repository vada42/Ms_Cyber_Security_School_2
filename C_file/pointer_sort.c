#include <stdio.h>
char * title[] = {"number","name","kor","eng","mat"};
char* name[] = {"pack","kim","sion","junhyc","yee"};
int kor[] = {10,20,30,40,50};
int eng[] = {50,60,80,30,20};
int mat[] = {46,96,85,12,30};
void sort(int *arr, int length);//sort prototype
void swap(int *a, int *b);//swap prototype


void swap(int *a, int *b){
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

void sort(int arr[],int length){
	int i;
	int j;
	int tmp;
	for(i=0; i<length-1; i++){
		for(j=0; j<length-i-1; j++){
			if(arr[j]>arr[j+1]){
				swap(&arr[j],&arr[j+1]);
			}
		}
	}
}

int main(){
        printf("sexual array\n");
        int i;
        int j;
        int kor_length;
        int eng_length;
        int mat_length;
        
                kor_length = sizeof(kor)/sizeof(kor[0]);
                eng_length = sizeof(eng)/sizeof(eng[0]);
                mat_length = sizeof(mat)/sizeof(mat[0]);
                
                sort(kor, kor_length);
                printf("kor_sort\n");
                for(i = 0; i<kor_length; i++){
                        printf("%3d",kor[i]);
                }
                printf("\n");
                
                printf("eng_sort\n");
                sort(eng, eng_length);
                for(i = 0; i<eng_length; i++){
                        printf("%3d",eng[i]);
                }
                printf("\n");
                
                printf("mat_sort\n");
                sort(mat, mat_length);
                for(i = 0; i<mat_length; i++){
                        printf("%3d",mat[i]);
                }
                printf("\n");
        
        for(i = 0; i<10; i++){
                if(i==0){//title line
                        for(j = 0; j<5; j++)printf("%s  ",title[j]);
                        printf("\n");
                }
                printf("%d  %s  %3d   %3d   %3d\n",i,name[i],kor[i],eng[i],mat[i]);
                
                
                
        }
}

