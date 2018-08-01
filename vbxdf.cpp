/*------------***********-----------
        Mostafijur Rahman Kajol
         CSE_15, JUST.
    ------********-------------------
    */

#include<bits/stdc++.h>

using namespace std;

typedef long long int ll;

int sum;
int x,y,z;
int arr[101];
int main()
{
    cin >> x >> y;
    int n =x;
    int p;
    int sum;
    for(int i=0;i<x;i++){
        cin >> p;
        sum += p;
    }
    int co=0;
    double avg = sum/x;

    while(avg<(double)y-0.5){
        sum += (double) y;
        co++;
        avg = sum /(x+co);
        }
        cout << co;
   return 0;
}

