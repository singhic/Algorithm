#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string h_n, s_n;
	vector<string> h, answer;
	int n, m;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> h_n;
		h.push_back(h_n);
	}

	sort(h.begin(), h.end());

	for (int i = 0; i < m; i++) {
		cin >> s_n;
		if (binary_search(h.begin(), h.end(), s_n)) {
			answer.push_back(s_n);
		}
	}

	sort(answer.begin(), answer.end());

	cout << answer.size() << "\n";

	for (auto a : answer) {
		cout << a << "\n";
	}

	return 0;
}
