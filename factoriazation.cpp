#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,p=0,k;
    cin >> n >> k;
     m=2;
     int i=0;
    int arr[1000];
     while(n!=0)
     {

         if(n % m !=0)
            m++;
         else{
             p++;
            n = n/m;
            arr[i]= m;
           /// cout <<m<<" ";
            if(n==1)
                break ;
                i++;
         }
     }
     int pp=1,res=1,co=0;
     if(k>p)
        cout << -1 <<endl;
     else{
          for(int i=0;i<p; i++){
            if(co<k-1)cout << arr[i] << " ";
            else res*=arr[i];
            co++;
          }
          if(res>1)cout << res << endl;
     }

     return 0;
}
