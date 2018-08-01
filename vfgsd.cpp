/*

        Mostafijur Rahman Kajol
        JUST, CSE'15
                             */



#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a;
    cin >> a;
    int arr[100001];

    for(int i=0;i<a;i++) cin >> arr[i];
    long long int  sum=0;
    for(int i=0;i<a; i++) sum += arr[i];

    if(sum%2==0) cout <<"Second"<<endl;
    else cout <<"First"<<endl;

    return 0;
}

