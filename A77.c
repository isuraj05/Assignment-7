#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,a,b;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		for(j=2;j<=i/2;j++)
		{
			if(i%j==0)
			    break;
		}
		if(j==i/2+1)
		    printf("%d  ",i);
	}
	getch();
}
