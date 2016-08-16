#include <iostream>

using namespace std;

int main()
{
	int w,w0;
	const char* result = new char[4];

	cin >> w;
	w0 = w%2;

	if (w0 == 0 && w!=2)
	{
		result = "YES";
	} 
	else
	{
		result = "NO";
	}

	cout << result << endl;

	return 0;
}

// kozlosoft solution
// #include <iostream>

// using namespace std;

// int main()
// {
// 	int w, w0;

// 	cin >> w;
// 	w0 = w%2;

// 	cout << ((w0 == 0 && w!=2) ? "YES" : "NO") << endl;
// 	// condition ? result_if_true : result_if false
// 	return 0;
// }
