#include<stdio.h>
//#include <windows.h> // Sleep함수가 포함된 헤


int main(void){
	int start, end, plus;
	printf("시작값 지정");scanf("%d", &start);
	printf("종료값 지정");scanf("%d", &end);
	printf("플러스 지정");scanf("%d", &plus);
	printf("합계  인덱스\n");
	int val = 1;
	while(start<end+1){
		printf("%04d  ,   %04d\n",val, start);//%(-)(n)d
		start= start+plus;
		val= val+start;
		
		//Sleep(100); // Sleep함수 호출	
	}
	start = 0;
	val = 0;
	printf("how is weather?");
	return 0;
}


