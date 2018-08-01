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
    int n,m=0;
    cin >> n;

    int x,y;
    int arr[10000], brr[10000];
    cin >> x;

    for(int i=0;i<x;i++){
        cin >> arr[i];
    }
    for(int i=0; i<x;i++){
        if(arr[i]==n)
            m=1;
    }
    cin >> y;
    for(int j=0; j<y;j++){
        cin >> brr[j];
    }
    for(int j=0;j<y;j++){
        if(brr[j]==n)
            m=1;
    }

    if(m==1)
        cout <<"I become the guy."<<endl;
    else
        cout <<"Oh, my keyboard!"<<endl;

    return 0;
}

