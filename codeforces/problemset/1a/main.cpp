#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double n, m, a;
	unsigned long long result; 

	cin >> n >> m >> a;
	result = ceil(n/a) * ceil(m/a);
	cout << result << endl;
	return 0;
}
