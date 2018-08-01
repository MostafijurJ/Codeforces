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
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a>=b && (a+b)%2==0){
            int x = (a+b)/2;
            int y = (a-b)/2;

            cout << x <<" " << y <<endl;
        }
        else
            cout <<"impossible"<<endl;
    }

   return 0;
}

