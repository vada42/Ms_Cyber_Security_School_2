#include<stdio.h>
#include <ctype.h>
#include <conio.h>



//int jusment(char c);
int jusment(char c){
		int k;
		if((c >='A') && (c<='Z')) k=1; //�빮�� 
		else if((c >='a') && (c<='z'))k=2;//�ҹ��� 
		else if((c >='0') && (c<='9'))k=3;//���� 
		else if((c== 3)) k=0;//���Ṯ�� 
		else k=4;//Ư�� 
		return k;
	}


int main(){
	char c;
	int m = 1;
	while(m){
		printf(">"); c = getch();
		
		switch(jusment(c)){
			case 1:{
				printf("%c : �빮��\n",c); break;
			}
			case 2:{
				printf("%c : �ҹ���\n",c); break;
			}
			case 3:{
				printf("%c : ����\n",c);  break;
			}
			case 4:{
				printf("%c : Ư������\n",c);  break;
			}
			default : m = 0;
		}
	}
	
}



