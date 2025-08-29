#include <stdio.h>
void bubble_sort(int array[],int length);

void bubble_sort(int arr[],int length){
	int count = 0;
	int i;
	for(count=0;count<length-1;count++){
		for(i=0;i<length-1-count;i++){
			int tmp=0;
			if (arr[i] > arr[i+1]){
			tmp = arr[i+1];
			arr[i] = arr[i+1];
			arr[i+1] = tmp;
			}
		}
	}
}

int main(){
	int num; 
	int array[5]={0};
	int i;
	int length;
	for(i=0; i<5; i++){
		scanf("%d",&num);
		array[i] =num;
		printf("%d\n",array[i]);
	}
	printf("\n");
	for(i=0; i<5; i++){
		printf("%d",array[i]);
	}
	printf("\n");
	printf("%d\n",sizeof(array)/sizeof(array[0]));
	length = sizeof(array)/sizeof(array[0]);
	bubble_sort(array,length);
	printf("정렬된 배열 : ");
	for(i=0; i<length;i++){
		printf("%d  ",array[i]);
	}
	
	return 0;
	
}
