#include <iostream>
#include <queue>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n, x;
    queue<int> q;
    string ans;
    cin >> n;

    for(int i=0; i<n; i++) {
        cin >> ans;
        if(ans == "push") {
            cin >> x;
            q.push(x);
        }
        else if(ans == "pop") {
            if(q.empty()) cout << -1 << '\n';
            else {
                cout << q.front() << '\n';
                q.pop();
            }
        }
        else if(ans == "size") {
            cout << q.size() << '\n';
        }
        else if(ans == "empty") {
            cout << q.empty() << '\n';
        }
        else if(ans == "front") {
            if(q.empty()) cout << -1 << '\n';
            else
                cout << q.front() << '\n';
        }
        else if(ans == "back") {
            if(q.empty()) cout << -1 << '\n';
            else cout << q.back() << '\n';
        }
    }
    return 0;
}