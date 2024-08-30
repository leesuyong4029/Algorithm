#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int num;

bool compare(int a, int b)
{
    int num1 = abs(num - a);
    int num2 = abs(num - b);

    if (num1 == num2)
    {
        return a > b;
    }
    return num1 < num2;
}

vector<int> solution(vector<int> numlist, int n) {
    num = n;
    sort(numlist.begin(), numlist.end(), compare);

    return numlist;
}