#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 1;
    int sum = 1;
    
    while(1)
    {
        sum *= answer;
        if(sum > n) break;
        answer++;
    }
    
    answer--;
    return answer;
}