#include<stdio.h>
int main()
{
    int n,m,a[50],i,j,t,min;

    scanf("%d %d",&n,&m);

    for(i=0;i<m;i++)
    scanf("%d",&a[i]);

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(a[i]>a[j])
            {
            t=a[i];
            a[i]=a[j];
            a[j]=t;

            }
        }
    }
    min=a[n-1]-a[0];

    for(i=n,j=1;i<m;i++,j++)
    {
        if(a[i]-a[j]<min)
        min=a[i]-a[j];
    }
    printf("%d",min);
return 0;
}
