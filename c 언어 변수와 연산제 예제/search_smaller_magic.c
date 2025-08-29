#include <stdio.h>
int search(int array[],int length);

int search(int arr[],int length){
		int count = 0;
		int min = arr[0];
		while(count<length){
			if (arr[count] < min){
				min = arr[count];
			}
			count++;
		}
	return min;
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
	printf("%d",search(array,length));
	return 0;
	
}


