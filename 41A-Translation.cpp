#include <iostream>

using namespace std;

int main()
{
    string s=" ";
    string t=" ";
    string m;
    cin>>s>>t;
    
    for(int i=t.length()-1 ; i>=0 ; i--){
      	m+=t[i];
    }
    if(s==m){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}