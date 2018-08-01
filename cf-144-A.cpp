#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n;i++){
        cin >> arr[i];
    }
    int m=0;
    for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
        if(arr[i]>arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            m++;
        }
    }
    for(int k=0;k<n;k++)
     cout << arr[k] << " ";
     cout << endl;
    }
   /// for(int i=0; i<n;i++)
        ///cout << arr[i] << " ";
        cout << m;
    return 0;
}
