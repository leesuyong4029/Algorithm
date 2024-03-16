#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int sum = 0;
    int min = 100;

    for(int i=0; i<7; i++) {
        cin >> n;
        if (n % 2 == 1) {
            sum += n;
            if(min > n) {
                min = n;
            }
        }
    }
    if (sum == 0) {
        cout << -1 << '\n';
    }
    else {
        cout << sum << '\n' << min << '\n';
    }


}

// 처음에는 배열로 풀면 되는 줄 알았지만, 홀수 판별 이후에 여기서
// 각 배열을 비교하면서 최솟값을 구하지 못한다.
// 그리고 문제를 순간 잘못 이해해서 최대값을 구하는 줄 알았다.