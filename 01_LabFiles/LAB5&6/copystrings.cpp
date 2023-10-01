
#include<stdio.h>
void copy(char *s,char *t);
int main()
{
	char a[20];
	char b[20];
	printf("enter a string\n");
	gets(a);
	copy(a,b);
	printf("copied in target -> %s\n",b);
	
}
void copy(char *s,char *t)
{
	while(*s!=0)
	{
		*t=*s;
		t++ ;
		s++ ;
		
	}
	*t='\0';
}
