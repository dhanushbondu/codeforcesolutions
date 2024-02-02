#include<stdio.h>
int main()
{
    int n,r=0,b=0,g=0;
    scanf("%d",&n);
    char a[55];
    scanf("%s",a);
    int i;
    for(i=0;a[i]<n;i++)
    {
        if(a[i]=='R'||a[i]=='G'||a[i]=='B')
        {
            if(a[i]=='R')
            {
                if(a[i]=='R'&&a[i+1]=='R')
                {
                    r++;
                }
            }
            else if(a[i]=='B')
            {
                if(a[i]=='B'&&a[i+1]=='B')
                {
                    b++;
                }
            }
            else
            {
                if(a[i]=='G'&&a[i+1]=='G')
                {
                    g++;
                }
            }
        }
    }
    printf("%d",r+g+b);
    return 0;
}
