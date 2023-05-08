#include<iostream>

using namespace std;

int main()
{
    int n=0;
    string s;
    cin>>n;
    for(int i=1; i<=n ; i++){
        if(i%2!=0 && i>1){
            s+="that I hate ";
        }
        else if(i%2!=0){
            s+="I hate ";
        }
        else{
            s+="that I love ";
        }
    }
    cout<<s<<"it";
    return 0;
}
