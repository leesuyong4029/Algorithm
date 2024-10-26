#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[502][502] =
        {{1,1,1,0,1,0,0,0,0,0},
         {1,0,0,0,1,0,0,0,0,0},
         {1,1,1,0,1,0,0,0,0,0},
         {1,1,0,0,1,0,0,0,0,0},
         {0,1,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0},
         {0,0,0,0,0,0,0,0,0,0}
         };
bool vis[502][502];
int n = 7, m = 10;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    stack<pair<int, int> > S;
    vis[0][0] = 1;
    S.push({0, 0});
    while (!S.empty()) {
        pair<int, int> cur = S.top(); S.pop();
        cout << '(' << cur.X << ", " << cur.Y << ") -> ";
        for (int dir = 0; dir < 4; dir++) { // 상하좌우 칸을 살펴볼 것이다
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue; // 범위 밖일 경우 넘어감
            if (vis[nx][ny] || board[nx][ny] != 1) continue; // 이미 방문한 칸이거나 파란 칸이 아닐 경우
            vis[nx][ny] = 1; // (nx, ny)를 방문했다고 명시
            S.push({nx, ny});

        }
    }
}