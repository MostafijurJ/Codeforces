#include<stdio.h>
int main()
{
    int n,i,a[1000], b=0,sum=0,m,p;
    scanf("%d", &n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum += a[i];

        if(a[i] > b)
            b = a[i];
    }
    m = n*b;
    p = m-sum;

    printf("%d\n", p);

    return 0;
}
