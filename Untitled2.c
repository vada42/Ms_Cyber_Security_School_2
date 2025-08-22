#include <stdio.h>
#include <stdlib.h>

int main(void){
	//필요 변수 선언 
	int user_num;
	int a = rand()%100;
	int count;
	//시작 멘트 
	printf("guess number\n");
	scanf("%d\n",&user_num);
	
	for(count=0; count<6; count++){
		if (user_num == a){
			print("great");
			return 0;
		}
		else if (user_num <a){
			printf("small try again\n");
			scanf("%d\n",&user_num);
		}
		else if (user_num <a){
			printf("big try again\n");
			scanf("%d\n",&user_num);
		}
		return 0;
	}	
	
}
