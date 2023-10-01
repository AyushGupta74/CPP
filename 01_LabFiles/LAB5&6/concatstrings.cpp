#include<stdio.h>
void concat(char *p, char*q);
int main()
{
	char a[10];
	char b[10];
	printf("enter string 1\n");
	gets(a);
	printf("enter string 2\n");
	gets(b);
	concat(a,b);
	printf("new string %s\n",a);
}
void concat(char *p, char*q)
{
	while(*p!='\0')
	p++;
	while(*q!=0)
	{
		*p=*q;
		p++;
		q++;
		
	}
//	printf(" ");
	*p='\0' ;
}
