#include <iostream>
 
using namespace std;
 
int n, a, b, c, ans;
 
int main()
{
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a >> b >> c;
        int sum = a + b + c;
        if(sum >= 2) ans++;
    }
    cout << ans << endl;
}