
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int x=n;
    int p;
    if(n%2==0)
        p = n/2-1;
    else
        p = n/2;
    cout << p %(x+1)<<endl;
   return 0;
}
