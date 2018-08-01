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
  char a[10000], b[100000];
   cin >> a >> b;
   int sum=0;
   int l= strlen(a);
   for(int i=0; i<l;i++){
        if(a[i]<97){
            a[i] += 32;
        }
   }

   ///cout << sum << endl;
   int summ=0;
   for(int i=0; i<l;i++){
        if(b[i]<97){
            b[i] += 32;
        }
   }

   sum = strcmp(a,b);

   if(sum<0)
        cout << -1 << endl;

  else if(sum ==0)
    cout << 0 << endl;

   else
    cout << 1 <<endl;
   return 0;
}

