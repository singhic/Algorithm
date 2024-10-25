#include <iostream>

using namespace std;

int main()
{
    int x;
	cin >> x;
	
	for(int i = 1; i <= x; i++)
	{
		for(int k = 0; k < i; k++)
			cout << "*";
		for(int j = 0; j < (2 * x) - (2 * i); j++)
			cout << " ";
		for(int k = 0; k < i; k++)
			cout << "*";
		cout << '\n';
	}
	
	for (int i = 0; i < x-1 ; i++)
   {
        for (int j = 0; j < x - i - 1 ; j++)
            cout << "*";
        for (int j = 0; j < 2 * (i + 1); j++)
            cout << " ";
        for (int j = 0; j < x - i - 1; j++)
            cout << "*";

        cout << endl;
   }   
}

