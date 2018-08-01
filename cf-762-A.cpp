#include<stdio.h>

int main()
{
   long long  int n,c=0,k,j=0, a[100000],i,d;
    scanf("%lld",&n);

    for( i=1; i*i<n;i++){
        if(n%i==0){
            if(i*i !=n){
                a[j] = n/i;
                j++;
            }
            c++;
            if(c==k){
                printf("%lld\n",i);
                break ;
            }
        }
    }

    d = k-c;
    if(c+j <k)
        printf("-1\n");
    else if(c<k)
        printf("%lld\n",a[j-d]);

    return 0;
}
