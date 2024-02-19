#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i;
    int count=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            count++;
        }
    }
    if(count>=1)
    {
        printf("HARD\n");
    }
    else
    {
        printf("EASY\n");
    }
}