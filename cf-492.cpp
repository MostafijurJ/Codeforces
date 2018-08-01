
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
    int n,p=0,i;
      cin >> n;

      for( i=1; i<= n; i++){
        p += (i*(i+1))/2;
        ///cout << p <<endl;

            if(p > n)
                break ;
      }

      cout << i-1 <<endl;

    return 0;
}
