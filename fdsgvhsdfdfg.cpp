
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

   while( cin >> n >> t >> k >> d){

   int sum =0,p;
    for(int  i=k; ; i+=k)
    {
        sum = sum+t;
        if(i>=n){p = sum-(t); break;}
        ///cout << sum << " ";/// << i << " ";
    }

    ///cout << sum-t <<endl;
    if(d<p)
        cout << "YES"<<endl;
    else  cout << "NO"<<endl;
   }
   return 0;
}

