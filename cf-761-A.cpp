#include<stdio.h>
#include<iostream>
using namespace std;


int main()
{
    int a,b; scanf("%d%d",&a,&b);
    if(a==0 && b== 0 )
    {
         printf("No\n");
        return 0;
    }

    if((a==b)|| (a-b)==1 ||(b-a)==1)
        printf("YES");
    else
        printf("NO");
    return 0;
}
