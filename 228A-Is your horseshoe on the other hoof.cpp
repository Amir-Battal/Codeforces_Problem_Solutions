#include<iostream>

using namespace std;

int main()
{
    long long  x=0, y=0, z=0, t=0;
    int c=0;
    cin>>x>>y>>z>>t;
    if(x==y && x==z && x==t || x==t || x==z || x==y){
        c++;
    }
    if(y==z && y==t || y==t || y==z ){
        c++;
    }
    if(z==t){
        c++;
    }
    cout<<c;
    return 0;
}