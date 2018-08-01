#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,t,d,i,f=0,sum=0,x;
    scanf("%d %d %d %d",&n,&t,&k,&d);
    for(i=k;;i=i+k){
        sum=sum+t;
       /// cout << sum << " ";
        if(i>=n) {
            x=sum-t;
            break;
        }
    }
    printf("%d\n",x);
    if(d<x) printf("YES");
    else printf("NO");
}
