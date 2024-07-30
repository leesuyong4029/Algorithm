#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;

    for (int i = 0; i < message.length(); i++) {
        answer++;
    }

    return answer * 2;
}