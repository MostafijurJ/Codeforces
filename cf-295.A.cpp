
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>
#include<stdio.h>
#include<istream>
#include<math.h>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int n;
   string k;
   cin >> n >> k;

   for(int i=0; i<n ; i++){
        if(k[i] > 92)
            k[i]= k[i]+32;
   }
   cout << k <<endl;


   return 0;
}
