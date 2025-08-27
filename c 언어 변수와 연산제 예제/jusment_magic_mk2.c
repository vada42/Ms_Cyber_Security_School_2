#include<stdio.h>
#include <ctype.h>
#include <conio.h>



//int jusment(char c);
int jusment(char c){
		int k;
		if((c >='A') && (c<='Z')) k=1; //대문자 
		else if((c >='a') && (c<='z'))k=2;//소문자 
		else if((c >='0') && (c<='9'))k=3;//숫자 
		else if((c== 3)) k=0;//종료문자 
		else k=4;//특문 
		return k;
	}


int main(){
	char c;
	int m = 1;
	while(m){
		printf(">"); c = getch();
		
		switch(jusment(c)){
			case 1:{
				printf("%c : 대문자\n",c); break;
			}
			case 2:{
				printf("%c : 소문자\n",c); break;
			}
			case 3:{
				printf("%c : 숫자\n",c);  break;
			}
			case 4:{
				printf("%c : 특수문자\n",c);  break;
			}
			default : m = 0;
		}
	}
	
}



