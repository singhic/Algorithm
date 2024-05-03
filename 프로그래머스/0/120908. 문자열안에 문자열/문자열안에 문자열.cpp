#include <string>
#include <vector>

using namespace std;

int solution(string str1, string str2) {
    int answer = 0;
    bool check=false;
    
    for(int i = 0; i < str1.size(); i++){
        if(str1[i] == str2[0])
        {
            for(int j = 0; j < str2.size(); j++)
            {
                if(str1[i] == str2[j]) check=false, i++;
                else check = true;
            }
            
            if(!check)
            {
                answer = 1;
                break;
            }
        }    
    }
    
    if(answer==0) answer=2;
    return answer;
}