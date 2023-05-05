#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    string s;
    int c=0;
    cin>>n>>s;
    for(int i=0 ; i<n; i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }  
    cout<<c;
    
    return 0;
}