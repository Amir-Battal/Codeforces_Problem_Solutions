#include<iostream>

using namespace std;

int main()
{
    int n=0;
    int a=0,b=0,c=0,d=0;
    cin>>n;
    while(true){
        n++;
        a = n/1000;
        b = n/100 %10;
        c = n/10 %10;
        d = n%10;
        if( a!=b && b!=c && c!=d && a!=d && a!=c && b!=d) {
            break;
        }
    }
    cout<<n<<endl;
    return 0;
}