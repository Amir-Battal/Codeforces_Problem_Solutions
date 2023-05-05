#include<iostream>

using namespace std;

int main()
{
    int n;
    int a=0;
    int d=0;
    string s;
    cin>>n>>s;
    for(int i=0 ; i<s.size() ; ++i){
        if(s[i]=='A'){
            a++;
        }
        else if(s[i]=='D'){
            d++;
        }
    }
    if(a>d){
        cout<<"Anton";
    }
    else if(d>a){
        cout<<"Danik";
    }
    else{
        cout<<"Friendship";
    }
    return 0;
}