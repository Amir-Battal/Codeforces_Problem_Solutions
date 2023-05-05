#include <bits/stdc++.h>
using namespace std;
int mp[29];
string s;
int main(){
    cin>>s;
    int n = s.size();
    for(int i=0;i<n;i++){
        mp[s[i]-'a']++;
    }
    int ans = 0;
    for(int i=0;i<26;i++){
        if(mp[i] > 0) ans++;
    }
    if(ans%2 == 1){
        cout<<"IGNORE HIM!"<<endl;
    }
    else{
        cout<<"CHAT WITH HER!"<<endl;
    }
}