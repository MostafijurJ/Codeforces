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
   int  a,b,c,n;
    int m=0;
    cin >> a >> b >> c >> n ;
    int arr[10000];
    for(int i=0;i<n;i++ ) cin >> arr[i];
    if(b<a && c>a){
   /* for(int j=0;j<n;j++){
        cin >> arr[j];
        for(int i=b+1;i<c;i++){
            if(i == arr[j])
                    m++;
            }
       } */
       m = c-b;
    }
    if(m>b)
    cout << m <<endl;
    else cout << 0<<endl;
   return 0;
}

