#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,hcf;
	printf("Enter two numbers: ");
	scanf("%d%d",&a,&b);
	for(hcf=a<b?a:b;hcf<=a*b;hcf--)
	{
		if(a%hcf==0&&b%hcf==0)
		    break;
	}
	if(hcf==1)
	    printf("CoPrime numbers");
	else
	    printf("Not CoPrime numbers");
	getch();
}
