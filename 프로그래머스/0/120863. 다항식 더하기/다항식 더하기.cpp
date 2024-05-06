#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    
    int x = 0;
    int number = 0;
    
    stringstream ss;
    ss.str(polynomial);
    
    // 계속 입력 받기
    string str;
    while (ss >> str)
    {
        if (str == "+")
        {
            continue;
        }
        else if (str.back() == 'x')
        {
            if (str == "x") x++;
            else 
            {
                x += stoi(str.substr(0, str.length() - 1));
            }
        }
        else
        {
            number += stoi(str);
        }
    }
 
    if (x && number)
    {
        if (x != 1) answer += to_string(x);
        answer += "x + " + to_string(number); 
    }
    else if (x && !number)
    {
        if (x != 1) answer += to_string(x);
        answer += "x";
    }
    else if (!x && number)
    {
        answer = to_string(number);
    }
    else
    {
        answer = "0";
    }
    return answer;
}