#include<stdio.h>
#include<conio.h>
int main()
{
	int a,i,n;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=2;i<=n+1;n++)
	{
		for(a=2;a<=(n+1)/2;a++)
		{
			if((n+1)%a==0)
		        break;
		}
		if(a==(n+1)/2+1)
		{
			printf("%d",n+1);
			break;
		}
	}
	getch();
}
