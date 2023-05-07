#include<iostream>

using namespace std;

int main()
{
    int n=0;
    cin>>n;
    int a[1000];
    for(int i=1 ; i<=n ; i++){
        int b;
        cin>>b;
        a[b] = i;
    }
    for(int i=1 ; i<=n ; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}