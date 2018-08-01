
/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;


int main()
{
    int m,n,p,o;
    int k=0;
    for(int i=0;i <4;i++){
        cin >>  m >> n >> o >> p;

        if(m==1 && p==1)
            k=1;
    }
    if(k==1)
        cout << "YES"<<endl;
    else
        cout <<"NO"<<endl;
   return 0;
}
