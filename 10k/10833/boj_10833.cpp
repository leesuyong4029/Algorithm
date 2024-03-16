#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    int a, b;
    int sum = 0;

    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> a >> b;
        sum += b % a; // 여기 증감연산자 다시 공부하기
    }
    cout << sum << '\n';
}

// 남는 사과의 총 개수를 나타내는 정수를 출력하기

// 왜 int remains = b % a; 이렇게 선언하고 for문 안에서 sum = sum + remains이렇게 하면 안 됐을까?
// 증감연산자에 대한 이해가 부족해서 틀린 문제이다.