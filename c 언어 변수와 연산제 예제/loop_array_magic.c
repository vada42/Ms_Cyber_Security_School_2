#include <stdio.h>
int main(){
	int arr[] = {1,2,3,4,5,6,7,8,9};
	int* p = arr;
	int i;
	printf("int arr[] = {");
	for(i=0;i<9;i++){
		if (i==8){
			printf("%d}",p[i]);
			break;
		}
		printf("%d,",arr[i]);
	}
	
}


/*	
for(i=0;i<9;i++){
		if (i==8){
			printf("%d}",arr[i]);
			break;
		}
		printf("%d,",arr[i]);
	}
	*/
