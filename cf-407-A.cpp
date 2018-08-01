/*
 ---------*********--------
   Mostafijur Rahman Kajol
        CSE, JUST
      ----*****---- */

#include<bits/stdc++.h>
#include<stdio.h>
#include<math.h>
#include<string.h>

using namespace std;

int main()
{
    int n,k,arr[1000],m=0;
    cin >> n >> k;

    for(int i=0; i<n; i++){
        cin >>arr[i];
    }

    for(int i=0;i<n;i++){

        while(arr[i]<(k*2)){
            arr[i] = arr[i]-(k*2);
            m++;
        }

         if(arr[i]<=k && arr[i+1]<=k)
            m++;
    }
    cout << m <<endl;

    return 0;
}
