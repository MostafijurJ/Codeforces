#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;

    int arr[n];

    for(int i=0;i<n;i++)
        cin >> arr[i];
       long long a,b,c;
        a = arr[0];
        for(int i=0;i<n;i++){
               if(a>arr[i])
                    a= arr[i];
            }
            long long sum=0;

            for(int i=0;i<n;i++){
                    b = arr[i]-a;
                if(b%k==0){
                    sum += b/k;
                }
                else{
                    cout << -1<<endl;
                    return 0;
                }
            }
        cout << sum << endl;


        return 0;
}

