#include <string>
#include <vector>

using namespace std;

vector<string> solution(string my_str, int n) {
    vector<string> answer;
    
    int idx = my_str.length();
    
    for(int i = 0; i < idx; i += n)
    {
        string str = my_str.substr(i, n);
        answer.push_back(str);
    }
    return answer;
}