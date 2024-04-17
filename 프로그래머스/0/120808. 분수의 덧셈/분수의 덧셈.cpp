#include <string>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    else
    {
        return gcd(b, a % b);
    }
}

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    vector<int> answer;
    int a = denom1 * denom2;
    int b = (denom1 * numer2 + denom2 * numer1);
    
    int c = gcd(a, b);
    
    a /= c;
    b /= c;
    
    if(a == b)
    {
        answer.push_back(1);
        answer.push_back(1);
    }
    else
    {
        answer.push_back(b);
        answer.push_back(a);
    }
    return answer;
}