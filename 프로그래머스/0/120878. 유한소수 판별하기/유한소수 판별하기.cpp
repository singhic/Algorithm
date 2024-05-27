#include <string>
#include <vector>

using namespace std;

int solution(int a, int b) {
    int answer = 1;
    int i = 1;
    
    while (1)
    {
        if(i == a + 1) break;
        
        if(a % i == 0 && b % i == 0)
        {
            a /= i;
            b /= i;
            i = 1;
        }
        i++;
    }
    
    int divider = 2;
    while(b > 1)
    {
        while(b % divider == 0)
        {
            if(divider != 2 && divider != 5)
            {
                return 2;
            }
            b /= divider;
        }
        divider++;
    }
    return answer;
}