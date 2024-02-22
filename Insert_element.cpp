#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin>>N;
    int arr[N];
    for (int i = 0; i < N; i++)
    {
        cin>>arr[i];
    }
    int I = N;
    int POS = 3 ,val = 10;
    while (I>=POS)
    {
        arr[I+1] = arr[I];
        I = I - 1;
    }
    N = N + 1;
    arr[POS] = val;

    for (int i = 0; i < N; i++)
    {
        cout<<arr[i]<<endl;
    }

    Return 0;
    
    
}
