#include <stdio.h>
#include <conio.h>//�ܼ� �Լ� ����ϱ� ���� ��� 
int main(void){
	int v1, v2, i;
	for(;;){//���ѹݺ��� 
		printf("v1 ����");scanf("%d",&v1);
		printf("v2 ����");scanf("%d",&v2);
		printf("�����ȣ ����\n");char k = getch();//�ܼ��Լ�  
		if(k =='+'){
			printf("%d %c %d = %d\n",v1,k,v2,v1+v2);
		}
		else if(k =='-'){
			printf("%d %c %d = %d\n",v1,k,v2,v1-v2);
		}
		else if(k =='*'){
			printf("%d %c %d = %d\n",v1,k,v2,v1*v2);
		}
		else if(k =='/'){
			printf("%d %c %d = %f\n",v1,k,v2,(double)v1/(double)v2);// �Ǽ����� ���ð��  
		}
		else{
			break;
		}
	}
	
}
