#include<iostream>

using namespace std;

int main()
{
    int n=0;
    int m=0,ch=0,ce=0;
    cin>>n;
    for(int i=0 ; i<n ; i++){
        cin>>m;
        if(m==1){
            ch++;
        }
        else{
            ce++;
        }
    }
    if(ch>0){
        cout<<"HARD";
    }
    else{
        cout<<"EASY";
    }
    return 0;
}