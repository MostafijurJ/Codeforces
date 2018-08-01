#include<stdio.h>
int main()

{
    int  n,i,a,p=0,m=0;
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a==0)
        {
            p++;
        }
    }

    if(n==1 && p==0)
        printf("YES\n");
        else if(n!=1 && p==1)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
