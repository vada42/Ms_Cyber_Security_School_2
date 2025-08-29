#include<stdio.h>

int main(int argc, char **argv){
	int i = 0;
	printf("%d\n",argv);
	for(i=0; i<argc; i++){
		printf("num %d str : %s\n",i+1,argv[i]);
	}
	return 0;
}
