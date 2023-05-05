#include<iostream>

using namespace std;

int main()
{
    long long n;
    int cy=0;
    cin>>n;
    while(n != 0){
        if( n%10==4 || n%10==7 ){
            cy+=1;
        }
        n/=10;
    }
    if( cy==4 || cy==7){
        cout<<"YES"<<endl;
    }
    else {
        cout<<"NO"<<endl;
    }
	return 0;
}