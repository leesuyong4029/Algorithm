#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = 0; i < my_string.length(); i++)
    {
        char temp = my_string[i];

        if (temp != 'a' && temp != 'e' && temp != 'i' && temp != 'o' && temp != 'u')
        {
            answer += my_string[i];
        }
    }
    return answer;
}