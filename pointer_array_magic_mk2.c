#include <stdio.h>

char* s1 = "good";//상수 영역 
char* s2 = "afternoon";

char* ss[] = {s1,s2};
int main(){
	printf("%s, %s",s1, s2);
}
