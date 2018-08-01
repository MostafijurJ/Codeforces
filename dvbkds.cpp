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
   int  a,b,c,na;
    int mx=0;
    cin >> a >> b >> c >> na ;
    int rrr[100000];
     for(int j=0;j<na;j++){
         cin >> rrr[j];
            if(rrr[j]> b && rrr[j]<c)
            mx++;
       }
    cout << mx <<endl;
   return 0;
}


