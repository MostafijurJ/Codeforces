
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
    string k;

    while(cin >> k){
    int m=0;
    int l = k.size();
    for(int i=0;i<l/2;i++){
        if(k[i] != (k[l-i-1])){
            m++;
        }
    }
    ///cout << m <<endl;
    if(m==0 && l%2!=0){
        cout << "YES"<<endl;
        return 0;
    }
    if(m==1){
        cout <<"YES"<<endl;
        return 0;
    }
    else{
        cout <<"NO"<<endl;
        return 0;
    }
    }

   return 0;
}
