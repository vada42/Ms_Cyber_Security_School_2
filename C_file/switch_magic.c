#include <stdio.h>
#include <conio.h>//�ܼ� �Լ� ����ϱ� ���� ��� 

int main(void){
	int v1, v2;
	printf("v1 ����");scanf("%d",&v1);
	printf("v2 ����");scanf("%d",&v2);
	printf("�����ȣ ����\n");char k = getch();//�ܼ��Լ�
	
	switch(k){
		case '+':
	 		printf("%d %c %d = %d\n",v1,k,v2,v1+v2);
	 		break;
	 	
	 	case '-':
	 		printf("%d %c %d = %d\n",v1,k,v2,v1-v2);
	 		break;
	 	
	 	case '*':
	 		printf("%d %c %d = %d\n",v1,k,v2,v1*v2);
	 		break;
	 	
	 	case '/':
	 		printf("%d %c %d = %d\n",v1,k,v2,(double)v1/(double)v2);
	 		break;
	 		
	 	degault:(k ==3);break;
	}	
}
