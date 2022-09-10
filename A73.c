#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,fib,n,i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(a=-1,b=1,i=-1;i<=n;i++)
	{
		fib=a+b;
		if(fib==n)
		{
			printf("Yes, The number is there in the fibonacci series");
		    break;
		}
		a=b;
		b=fib;
	}
	if(fib!=n)
	printf("No, The number is not there in the fibonacci series");
	getch();
}
