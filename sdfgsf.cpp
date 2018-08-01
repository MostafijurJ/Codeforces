
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
    int n,m,k;
    cin >> n >> m >> k;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int p=0;
    for(int i=m; i<n;i++){
        if(arr[i]==0)
            continue;
        p++;
    }
    if(p==0)
        cout <<10<<endl;
    else
    cout << p*10 <<endl;

   return 0;
}
