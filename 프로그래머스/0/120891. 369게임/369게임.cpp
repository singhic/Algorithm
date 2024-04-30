#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(int order) {
    int answer = 0;
    stringstream ss;
    ss << order;
    string str = ss.str();
    
    for(int i = 0; i < str.size(); i++)
    {
        if(str[i] == '3' || str[i] == '6' || str[i] == '9') answer++;
    }
    return answer;
}