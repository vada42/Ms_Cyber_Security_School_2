#include<stdio.h>
#include <ctype.h>
#include <conio.h>

int jusment(char word){
	if (isupper(word)){
		printf("�빮��");
		return 0;
	}
	else if (islower(word)){
		printf("�ҹ���");
	}
	else if (isdigit(word)){
		printf("����");
	}
	else{
		printf("Ư������");
	}
}

int jusment(char word);

int main(){
	char word;
	while(1){
		//scanf("%c",&word);
		printf(">"); word = getch();
		printf("%c",word);
		printf("%c \n",jusment(word));
		if ()
	}
	
	//jusment(word);
	return 0;
}
