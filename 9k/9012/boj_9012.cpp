#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;

    while(n--) {
        stack<char> st;
        string s;
        cin >> s;

        for(int i = 0; i < s.length(); i++) {
            if(st.empty()) { // 스택이 비어있다면 push
                st.push(s[i]);
            }
            else { // 스택이 비어있지 않고
                if(st.top() == '(' && s[i] == ')') { // top이 여는 괄호면서 다음 인자가 닫는 괄호면
                    st.pop();  // pop
                }
                else { // 그 외의 경우는 모두 push
                    st.push(s[i]);
                }
            }
        }
        if(st.empty()) {
            cout << "YES" << '\n';
        }
        else {
            cout << "NO" << '\n';
        }
    }
}

// 스택을 안 쓰고 length() 메소드를 써서 풀었지만 NO가 나오는 조건이 괄호의 수가
// 짝수의 개인줄 알고 풀었으나 문제를 잘못 이해했다.
// 결국 구글링을 해서 해당 문제를 스택으로 풀어야 해결가능한 것을 알았다.
// 스택의 기본구조인 선입후출의 개념과 stack.empty(), stack.top() 등의 개념을 활용하여 풀 수 있는 문제이다.
// 이 문제의 핵심은 닫는 괄호 ')'의 짝이 있는가를 찾는 것이다.
// 처음부터 닫는 괄호가 들어오면 당연히 NO를 반환해야 하는 것이고
// 닫는 괄호와 여는 괄호의 개수가 같아도, 짝이 맞지 않으면 해결할 수 없다.

