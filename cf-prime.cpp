#include<stdio.h>
#include<math.h>

int prime(int a)
{
    int i, flag = 0;

    for(i=2; i<=sqrt(a); ++i)
    {
        if(a%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==1)
    return a;
}

int main()
{
    int n,a,i;
    scanf("%d",&n);

    for(i=1; i<=1000;i++)
    {
        a= n*i+1;
        if(a==prime(a))
        {
            printf("%d\n", i);
            break ;
        }
    }

    return 0;
}
