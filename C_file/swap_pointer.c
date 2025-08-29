#include<stdio.h>

int swap(int *i, int *j){
	int k;
	k = *i;
	*i = *j;
	*j = k;
}
int main(){
	int i = 10;int j=20;
	printf("before i: %d j : %d\n",i,j);
	
	swap(&i,&j);
	printf("after i: %d j : %d\n",i,j);

}
