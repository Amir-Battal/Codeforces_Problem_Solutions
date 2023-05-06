#include<iostream>

using namespace std;

int main()
{
    int n=0,h=0;
    cin>>n>>h;
    int c=0;
    for(int i=0 ; i<n ; i++){
        int m=0;
        cin>>m;
        if(m>h){
            c+=2;
        }
        else{
            c++;
        }
    }
    cout<<c;
    return 0;
}
