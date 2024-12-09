#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	int n, temp;
	cin >> n;

	int sum = 0;
	vector<int> a, b;

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		a.push_back(temp);
	}
	sort(a.begin(), a.end());

	for (int i = 0; i < n; i++)
	{
		cin >> temp;
		b.push_back(temp);
	}

	for (int i = 0; i < n; i++)
	{
        sum += (a[i] * *max_element(b.begin(), b.end()));
		b.erase(max_element(b.begin(), b.end()));
	}
	cout << sum << endl;
}
