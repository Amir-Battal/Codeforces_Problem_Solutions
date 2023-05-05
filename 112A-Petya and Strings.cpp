#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	int n = s1.size();
	for (size_t i = 0; i < n; i++)
	{
		s1[i] = tolower(s1[i]);
		s2[i] = tolower(s2[i]);
 
	}
	for (size_t i = 0; i < n; i++)
	{
		if (s1[i] == s2[i]) continue;
		if (s1[i]<s2[i])
		{
			cout << "-1" << endl;
			return 0;
 
		}
		cout << "1" << endl;
		return 0;
	}
	cout << "0" << endl;
}