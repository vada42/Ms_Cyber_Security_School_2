#include<stdio.h>
#include <ctype.h>

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
	scanf("%c",&word);
	printf("%c : %c",word, jusment(word)); 
	//jusment(word);
	return 0;
}
