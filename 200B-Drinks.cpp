#include<iostream>

using namespace std;

int main()
{
    int n=0;
    cin>>n;
    float m=0,sum=0,avg=0;
    for(float i=0 ; i<n ; i++){
        cin>>m;
        sum += m;
    }
    avg = sum /n;
    cout<<avg;
    return 0;
}