#include <string>
#include <vector>

using namespace std;

int cnt = 0;

void DFS(vector<int> &numbers, int target, int d, int sum) {

    if (d == numbers.size()) {
        if (sum == target) cnt++;
    } else {
        DFS(numbers, target, d + 1, sum + numbers[d]);
        DFS(numbers, target, d + 1, sum - numbers[d]);
    }
}

int solution(vector<int> numbers, int target) {

    DFS(numbers, target, 0, 0);
    return cnt;
}