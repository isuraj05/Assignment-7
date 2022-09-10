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
		printf("%d ",fib);
		a=b;
		b=fib;
	}
	getch();
}
