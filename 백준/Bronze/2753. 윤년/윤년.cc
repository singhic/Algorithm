#include <iostream>

using namespace std;
int main(int argc, char const* argv[])
{
    int a;
    cin >> a;
        if (a % 4 == 0)
        {
            if (a % 100 != 0 || a % 400 == 0)
            {
                cout << 1;
            }
            else
            {
                cout << 0;
            }
        }
        else
        {
            cout << 0;
        }
}