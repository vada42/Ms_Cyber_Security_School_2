#include <stdio.h>
#include <stdlib.h>

int main(void){
	//�ʿ� ���� ���� 
	int user_num;
	int a = rand()%100;
	int count;
	//���� ��Ʈ 
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
