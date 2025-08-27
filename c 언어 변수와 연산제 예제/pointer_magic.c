#include <stdio.h>
int main(){
	int a = 0x1234;
	char* pc;//1
	int* pi;//4
	double* pd;//8
	
	
	
	printf("&a : %08x %08x\n\n\n\n", &a, a);
	
	pi = &a;
	pc = pi;
	pd = pi;
	
	
	printf("&a : %08x %08x\n\n", &a, a);
	
	printf("p : %08x %08x %08x\n", &pi, pc,pd);
	printf("p+1 : %08x  %08x %08x\n",++pi, pc+1, pd+1);//p+1
	printf("p+2 : %08x  %08x %08x\n",pi+2, pc+2, pd+2);
}
