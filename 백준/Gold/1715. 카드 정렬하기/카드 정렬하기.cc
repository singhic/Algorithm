#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main(void)
{
	int n;
	cin >> n;

	priority_queue<int, vector<int>, greater<int>> pq;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		pq.push(num);
	}

	int answer = 0;
	while (!pq.empty())
	{
		int n1, n2;
		n1 = pq.top(); pq.pop();
		if (pq.empty()) break;
		n2 = pq.top(); pq.pop();
		answer += n1 + n2;
		pq.push(n1 + n2);
	}
	cout << answer << endl;
	return 0;
}