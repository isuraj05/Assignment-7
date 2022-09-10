#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int n,x,y,rem,dig=0,sum=0;
	printf("Enter a number: ");
	scanf("%d",&n);	
	x=n;
	while(x!=0)
	{
		dig++;
		x=x/10;
	}
	y=n;
	while(y!=0)
	{
		rem=y%10;
		sum=sum+pow(rem,dig);
		y=y/10;
	}
	if(sum==n)
	    printf("It is an armstrong number");
	else
	    printf("It is not an armstrong number");	
	getch();
}
