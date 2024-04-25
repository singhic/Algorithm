#include <string>
#include <vector>
#include <map>
#include <sstream>

using namespace std;

string solution(string letter) {
    string answer = "";
    map<string,string> m =
    {
        {".-","a"},{"-...","b"},{"-.-.","c"},{"-..","d"},
        {".","e"},{"..-.","f"},{"--.","g"},{"....","h"},
        {"..","i"},{".---","j"},{"-.-","k"},{".-..","l"},
        {"--","m"},{"-.","n"},{"---","o"},{".--.","p"},
        {"--.-","q"},{".-.","r"},{"...","s"},{"-","t"},
        {"..-","u"},{"...-","v"},{".--","w"},{"-..-","x"},
        {"-.--","y"},{"--..","z"}
    };
    
    stringstream s;
    s.str(letter);
    string temp;
    while(s>>temp)
    {
        answer += m.find(temp)->second;
    }
    
    return answer;
    return answer;
}