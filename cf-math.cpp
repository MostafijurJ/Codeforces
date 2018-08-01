
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */
#include<iostream>
using namespace std;
long long function(long long n)
{
    long long  res=0,i,rem;
    while(n){
        rem=n%10;
        res+=rem;
        n/=10;
    }
    return res;
    }

    int main()
    {
    long long  a,b,c,n;
    while(n!=0)
    {
    cin>>n;
    if(n==0){
    break;
    }
    a=function(n);
    b=function(a);
    c=function(b);
    cout<<c<<endl;
    }
return 0;
}
