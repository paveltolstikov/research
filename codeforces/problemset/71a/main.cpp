#include <iostream>
#include <string>

using namespace std;

int main()
{

	int n;
	string s;

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> s;

		if (s.size() < 11)
		{
			cout << s << endl;
		}

		else 
		{
			cout << s[0] << (s.size() - 2) << s[s.size() - 1] << endl;
		}
	}


	return 0;
}