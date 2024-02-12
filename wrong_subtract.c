#include<stdio.h>
int main()
{
	int n,r;
	scanf("%d%d",&n,&r);
	int i;
	int res=n,rem=0,sum=0;
	for(i=0;i<r;i++)
	{
		rem=n%10;
		if(rem>0)
		{
			n=res=res-1;
		}
		else if(rem==0)
		{
			n=res=res/10;
		}
	}
	printf("%d",res);
	return 0;
}
