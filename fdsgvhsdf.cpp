
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
    int n,t,k, d;

    cin >> n >> t >> k >> d;
    int tc = (t*n)/k;


    if(tc>(t+d))
    ///if(t>d || t==d/2 && n>k)
        cout <<"YES";
    else
        cout <<"NO";
   return 0;
}

