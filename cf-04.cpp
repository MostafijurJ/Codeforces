/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
int main()
{
    ll m,n;
    cin >> m >> n;
    /*if(m>n){
        ll temp = m;
        m=n;
        n=temp;
    }*/
    ll k=0,p,i=2;
        for(ll j=m; j<=n;j++){
            if(j%i==0)
            {
            cout << j << " ";
                k++;
                p=i;
            }
        }
           i++;
        cout << k <<" "<< p;
   return 0;
}

