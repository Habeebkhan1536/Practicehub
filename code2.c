#include<stdio.h>
void main()
{
	char ch;
	int a,b;
	printf("enter operators as + or - or * or / or %:\n");
	scanf("%c",&ch);
	printf("enter a and b values:\n");
	scanf("%d%d",&a&b);
	switch(ch)
	{
		case'+':
			printf("%d,a+b");
			break;
		case'-':
			printf("%d,a-b");
			break;
		case'*':
			printf("%d,a*b");
			break;
		case'/':
			printf("%f,a/b");
			break;
		case'%':
			printf("%d,a%b");
			break;
		default:
			printf("enter an valid operator");
			
	}
}
