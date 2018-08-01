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
    int n;
   while( cin >> n){
    int a,b;
    int m=0;
    int arr[n];
    int brr[n];
    int p=0;
    for(int i=0;i<n;i++){
        cin >> arr[i] >> brr[i];

    }
    int k=0;
    int kk=n;
    for(int i=0;i<n;i++){
        if(arr[i]!= brr[i])
            m=1;
            if(i==(kk-1))
                k=i;
            else
                k=i+1;
              ///  cout << k << " ";
        if(arr[i]==brr[i] && arr[i]>=arr[k])
            p++;
    }
  ///  cout << p <<endl;
    if(m==1){
        cout <<"rated"<<endl;
    }
    else if(p==n)
        cout <<"maybe"<<endl;
    else
        cout <<"unrated"<<endl;
   }
   return 0;
}

