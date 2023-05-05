#include <bits/stdc++.h>
using namespace std;
int m;
int a[109];
string s;
int main(){
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i+=2){
        a[m] = s[i]-'0';
        m++;
    }
    sort(a,a+m);
    for(int i=0;i<m-1;i++){
        cout<<a[i]<<"+";
    }
    cout<<a[m-1]<<endl;
}