#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a;
	for(i=2;i<=100;i++)
	{
		for(a=2;a<=i/2;a++)
		{
			if(i%a==0)
			    break;
		}
		if(a==i/2+1)
		    printf("%d  ",i);
	}
	getch();
}
