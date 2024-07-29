#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.length(); i++)
    {
        char temp = my_string[i];

        if (temp >= 'a' && temp <= 'z')
        {
            answer += char(temp - 'a' + 'A');
        }

        else if (temp >= 'A' && temp <= 'Z')
        {
            answer += char(temp - 'A' + 'a');
        }
    }
    return answer;
}