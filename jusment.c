#include<stdio.h>
#include <ctype.h>

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
	scanf("%c",&word);
	printf("%c : %c",word, jusment(word)); 
	//jusment(word);
	return 0;
}
