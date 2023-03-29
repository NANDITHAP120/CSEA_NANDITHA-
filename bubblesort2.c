#include <stdio.h>
int main()
{
    int a[10],n,i,j,temp;
    printf("enter the size:");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        printf("enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("ascending order is:");
    for(i=0;i<n-1;i++)
    {
        for(j=0;j=n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    return 0;
}
