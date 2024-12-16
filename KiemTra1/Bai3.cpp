#include <iostream>
#include <vector>

using namespace std;

const int MAX = 100;
int m, n;
char a[MAX][MAX];
int dx[4] = {0, 1, 1, 1}; // Directions: right, down, down-right, up-right
int dy[4] = {1, 0, 1, -1};

bool dfs(int x, int y, char player) {
    for (int k = 0; k < 4; k++) {
        int cnt = 1;
        int nx = x + dx[k];
        int ny = y + dy[k];
        while (nx >= 0 && nx < m && ny >= 0 && ny < n && a[nx][ny] == player) {
            cnt++;
            nx += dx[k];
            ny += dy[k];
        }
        if (cnt >= 5) {
            return true;
        }
    }
    return false;
}

int main() {
    int in = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != '.') {
                if (dfs(i, j, a[i][j])) {
                    int win = (a[i][j] == 'X') ? -1 : 1;
                    if (in == 0) {
                        in = win;
                    } else if (in != win) {
                        cout << 0;
                        return 0;
                    }
                }
            }
        }
    }
    cout << in;
    return 0;
}