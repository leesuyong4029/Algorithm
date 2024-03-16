#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    int sum = 0;
    cin >> a >> b >> c >> d >> e;

    sum = a*a + b*b + c*c + d*d + e*e;
    int check = sum % 10;
    cout << check << '\n';
}