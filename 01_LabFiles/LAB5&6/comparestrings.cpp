#include<stdio.h>
#include<string.h>
void cmp(char *a,char*b);
int main()
{
	char str1[10];
	char str2[10];
	printf("enter string 1\n")  ;
	gets(str1);

       
	printf("enter string 2\n")  ;
	gets(str2);
	cmp(str1,str2) ;
	
}
void cmp(char *a,char*b)
{      int static flag=1;
	while((*a!='\0'&&*b!=0)&&*a==*b)
	{  
		a++;
		b++;

	}
	if(*a==*b) 
	printf("both are same");
	else printf("not same")   ;
	
}
