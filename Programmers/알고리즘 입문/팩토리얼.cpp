#include <string>
#include <vector>

using namespace std;

int factorial(int m) {
    if(m == 0 || m == 1)
        return 1;
    else
        return m * factorial(m - 1);
}

int solution(int n) {
    int answer = 0;
    while (factorial(answer) <= n)
        answer++;
    answer--;
    return answer;
}