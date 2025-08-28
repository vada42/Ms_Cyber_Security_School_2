#include<stdio.h>


int main(void){
	int start, end, plus;
	printf("시작값 지정");scanf("%d", &start);
	printf("종료값 지정");scanf("%d", &end);
	printf("플러스 지정");scanf("%d", &plus);
	printf("합계    인덱스\n");
	int val = start;
	int i;
	for(i=start; i<end+1; i=i+plus){
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

