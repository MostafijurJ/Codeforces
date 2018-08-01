#include<bits/stdc++.h>

using namespace std;
int a[1000000],b[1000000];
int main()
{
    long long int p,k;
    int m=0,n=0;

    cin >> p >>k;
   long long  int odd = (p+1)/2;
    if(k>odd)cout << 2*(k-odd)<< endl;
    else cout << (2*(k)-1)<< endl;
    return 0;
}
