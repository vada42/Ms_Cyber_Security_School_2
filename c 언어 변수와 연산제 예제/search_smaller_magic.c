#include <stdio.h>
#include <conio.h>
//int search(int array);

int main(){
	int c; 
	int array[5]={};
	int i = 0;
	for(i=0; i<6; i++){
		c = getch();
		array[i] =c;
	}
	search(array);
	return 0;
	
}

int sort(int arr[]){
		int count = 0;
		int len = sizeof(arr);
		int sort_arr[]={};
		while(count<len){
			if (arr[count] < arr[count+1]){
				sort_arr[count] = arr[count];
			}
			else if (arr[count] > arr[count+1]){
				sort_arr[count] = arr[count+1];
			}
			count++;
		}
		return sort_arr;
	}
	
int search(int arr[]){
	return sort(arr)[0];
}
