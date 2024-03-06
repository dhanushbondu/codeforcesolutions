#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int l=a,x=b;
	int years=0;
	int i;
	while(l<=x)
	{
		l=l*3;
		x=x*2;
		years=years+1;
		if(l>x)
		{
			break;
		}
	}
	printf("%d",years);
	return 0;
}
