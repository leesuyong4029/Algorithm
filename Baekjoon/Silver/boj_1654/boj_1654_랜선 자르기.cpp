#include <iostream>
#include <vector>
using namespace std;

vector<long long int> LAN;
int main(void) {
    long long int sum = 0;
    int m, n;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        long long int num;
        cin >> num;
        LAN.push_back(num);
    }

    for (int i = 0; i < n; i++)
        sum += LAN[i];

    long long int start = 1;
    long long int end = sum;
    long long int height = 0;
    while (start <= end)
    {
        long long int total = 0;
        long long int mid = (start + end) / 2;
        for (int i = 0; i < LAN.size(); i++)
            total += LAN[i] / mid;

        if (total < m)
            end = mid - 1;
        else
        {
            height = mid;
            start = mid + 1;
        }
    }
    cout << height;
    return 0;
}