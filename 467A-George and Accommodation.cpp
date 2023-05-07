#include<iostream>

using namespace std;

int main()
{
    int n=0, c=0;
    int x,y;
    cin>>n;
    while(n--){
        cin>>x>>y;
        if(y-x >= 2){
            c++;
        }
    }
    cout<<c;

    return 0;
}