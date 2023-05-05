#include <iostream>

using namespace std;

int main()
{
    int n, a, b, mx;
    int s = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b; 

        s += b - a;
        mx = max(s, mx);
    }
    cout << mx;
    return 0;
}