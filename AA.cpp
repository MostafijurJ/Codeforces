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
   int  k,b,c,n;
   cin >> k >> b;

   for(int i=1;i<10;i++){
        if((k*i)%10==0 || (k*i)%10==b)
          {
               cout << i <<endl;
              break ;
          }

   }
   return 0;
}

