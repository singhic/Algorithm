#include <string>
#include <vector>

using namespace std;

int solution(vector<string> babbling) {
    int answer = 0;
    for(int i = 0; i < babbling.size(); i++)
    {
        string s = babbling[i];
        bool flag = true;
        
        int j = 0;
        while(1)
        {   
            if(j == s.length()) break;
            
            if (s.substr(j, 3) == "aya") j += 3;
            else if (s.substr(j, 2) == "ye") j += 2;
            else if (s.substr(j, 3) == "woo") j += 3;
            else if (s.substr(j, 2) == "ma") j += 2;
            else
            {
                flag = false;
                break;
            }
        }
        
        if (flag)
        {
            answer++;
            flag = 1;
        }
        else flag = 1;
    }
    return answer;
}