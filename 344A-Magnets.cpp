
#include<iostream>
 
using namespace std;
 
int main()
{
    int n=0, c=0;
    int x[100000];
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>x[i];
        
    }
    for(int i=0 ; i<n ; i++){
        if(x[i] != x[i+1]){
            c++;
        }
    }
    cout<<c;
    return 0;
}