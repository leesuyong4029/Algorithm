#include <string>
#include <vector>

using namespace std;

vector<int> solution(int money) {
    vector<int> answer;

    int number = money / 5500;
    int change = money % 5500;

    answer.push_back(number);
    answer.push_back(change);

    return answer;
}