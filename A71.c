#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,fib,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(a=-1,b=1,i=1;i<=n;i++)
	{
		fib=a+b;
		a=b;
		b=fib;
	}
	printf("Nth term of the fibonacci series is %d",fib);
	getch();
}
