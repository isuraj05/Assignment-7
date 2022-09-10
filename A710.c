#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,x,y,rem,dig,sum;	
	for(i=1;i<=1000;i++)
	{
		dig=0,sum=0;
		x=i;
		while(x!=0)
		{
			dig++;
			x=x/10;
		}
		y=i;
		while(y!=0)
		{
			rem=y%10;
			sum=sum+pow(rem,dig);
			y=y/10;
		}
		if(sum==i)
	    	printf("%d  ",i);
	}	
	getch();
}
