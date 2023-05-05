#include<iostream>
using namespace std;
 
int main()
{
    int b,c=0;
    int a[]={5,4,3,2,1};
    cin>>b;
    for(int i=0 ; i<5 ; i++){
        c+=b/a[i];
        b = b%a[i];
    }
    cout<<c;
 
    return 0;
}