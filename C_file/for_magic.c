#include<stdio.h>


int main(void){
	int start, end, plus;
	printf("���۰� ����");scanf("%d", &start);
	printf("���ᰪ ����");scanf("%d", &end);
	printf("�÷��� ����");scanf("%d", &plus);
	printf("�հ�    �ε���\n");
	int val = start;
	int i;
	for(i=start; i<end+1; i=i+plus){
		printf("%04d  ,   %04d\n",val, start);//%(-)(n)d
		start= start+plus;
		val= val+start;
		
		//Sleep(100); // Sleep�Լ� ȣ��	
	}
	start = 0;
	val = 0;
	printf("how is weather?");
	return 0;

}

