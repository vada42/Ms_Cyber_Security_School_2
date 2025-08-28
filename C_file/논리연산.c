#include <stdio.h>

int main(void){
	int x , y;
	//int A,O,X,N;
	int i;
	printf("x y A O X N\n");
	printf("-------------\n");
	int x_list[4];
	int y_list[4];
	x_list[0]=1;x_list[1]=1;x_list[2]=0;x_list[3]=0;
	y_list[0]=1;y_list[1]=0;y_list[2]=1;y_list[3]=0;
	
	for(i=0; i<4; i++){
		printf("%d %d %d %d %d %d \n",x_list[i],y_list[i],x_list[i] &&y_list[i], x_list[i]||y_list[i], x_list[i]^y_list[i], !x_list[i]);
	}
	i=0;
	return 0;
}
