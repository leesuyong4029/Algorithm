#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    string answer = "";

    for (int i = my_string.length() - 1; 0 <= i; i--) {
        answer += my_string[i];
    }



    return answer;
}