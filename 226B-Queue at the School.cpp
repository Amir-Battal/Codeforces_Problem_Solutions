#include<iostream>

using namespace std;

int main()
{
    int n=0,t=0;
    string s;
    cin>>n>>t;
    cin>>s;
    
    while(t--){
        for(int i=0 ; i<n ; i++){
            if(s[i]=='B' && s[i+1]=='G' ){
                swap(s[i+1], s[i]);
                i++;
            }
        }
    }
    cout<<s;
    return 0;
}