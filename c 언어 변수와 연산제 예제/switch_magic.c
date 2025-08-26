#include <stdio.h>
#include <conio.h>//콘솔 함수 사용하기 위한 헤더 

int main(void){
	int v1, v2;
	printf("v1 지정");scanf("%d",&v1);
	printf("v2 지정");scanf("%d",&v2);
	printf("연산기호 지정\n");char k = getch();//콘솔함수
	
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
