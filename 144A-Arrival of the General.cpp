#include<iostream>
 
using namespace std;
 
int main()
{
    int n=0; 
    cin>>n;
    int m[n];
    for(int i=0 ; i<n ; i++){
        cin>>m[i];
    }
    int max=m[0], min=m[0], iMax=0, iMin=0;
    for(int i=0 ; i<n ; i++){
        if(max<m[i]){
           max = m[i];
           iMax = i;
        }
        if(min>=m[i]){
            min = m[i];
            iMin = i;
        }
    }
    if(iMax > iMin){
        iMin = (n-1) - iMin;
        cout<<(iMin + iMax - 1)<<endl;
    }
    else{
        iMin = (n-1) - iMin;
        cout<<(iMin + iMax)<<endl;
    }
    return 0;
}