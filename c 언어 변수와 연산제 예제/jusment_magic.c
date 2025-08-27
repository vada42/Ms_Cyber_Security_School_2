#include<stdio.h>
#include <ctype.h>
#include <conio.h>

int jusment(char word){
	if (isupper(word)){
		printf("대문자");
		return 0;
	}
	else if (islower(word)){
		printf("소문자");
	}
	else if (isdigit(word)){
		printf("숫자");
	}
	else{
		printf("특수문자");
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
