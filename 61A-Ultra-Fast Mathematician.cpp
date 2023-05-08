#include<iostream>

using namespace std;

int main()
{
    string n,m,x;
    cin>>n>>m;
    for(int i=0 ; i<n.size() ; i++){
        if(n[i] == m[i]){
            x+="0";
        }
        else{
            x+="1";
        }
    }
    cout<<x;
    return 0;
}