#include <iostream>
#include <string>

using namespace std;

string getFizzBuzzOutput(int num) {
    if (num % 3 == 0 && num % 5 == 0) return "FizzBuzz";
    else if (num % 3 == 0) return "Fizz";
    else if (num % 5 == 0) return "Buzz";
    else return to_string(num);
}

int main() {
    string s1, s2, s3;
    cin >> s1 >> s2 >> s3;
    
    string x;
	if ('1' <= s1[0] && s1[0] <= '9') {
		x = getFizzBuzzOutput(stoi(s1)+3);
	}
    else if ('1' <= s2[0] && s2[0] <= '9') {
        x = getFizzBuzzOutput(stoi(s2)+2);
    }
    else if ('1' <= s3[0] && s3[0] <= '9') {
        x = getFizzBuzzOutput(stoi(s3)+1);
    }

    cout << x << endl;

    return 0;
}