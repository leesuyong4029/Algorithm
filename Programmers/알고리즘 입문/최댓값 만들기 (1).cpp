#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> numbers) {

    sort(numbers.begin(), numbers.end());

    int n = numbers.size();

    return numbers[n - 1] * numbers[n - 2];
}