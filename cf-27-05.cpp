
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
    int p,pp;
    scanf("%d%d",&p,&pp);
        int kk=1,k=2;
            while(1){

                if(p-kk>=0){
                    p = p-kk;
                    kk +=2;
                }
                else{
                        cout << "Vladik"<<endl;
                            break ;

                }

                if(pp-k>=0){
                    pp = pp-k;
                    k+=2;
                }
                else {
                        cout << "Valera"<<endl;
                        break ;
                }
            }
   return 0;
}
