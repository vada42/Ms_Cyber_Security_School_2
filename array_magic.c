/* va_str.c */
#include <stdio.h>
int main(void)
{
int i;
char ch;
char str[6]="Hello";
printf("--���� �� ���ڿ�--\n");
printf("%s \n", str);
for(i=0; i<6; i++)
printf("%c | ", str[i]);
/* ���ڿ� ���� */
for(i=0; i<3; i++)
{
ch=str[4-i];
printf("%s\n",ch);
str[4-i]=str[i];
str[i]=ch;
}
printf("\n\n--���� �� ���ڿ�--\n");
printf("%s \n", str);
return 0;
}
