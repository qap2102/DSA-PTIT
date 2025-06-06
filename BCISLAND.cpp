#include <bits/stdc++.h>
using namespace std;
#define faster                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
#define ll long long
#define fi first
#define se second
const int MOD = 1e9+7;
const int N=1e6+5;

const int MAXN=1005;

int t,n,m,u ,v, mau;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[N];
vector<pair<int,int>> vp;
bool visited[N];
int parent[MAXN];
int color[MAXN];
bool kt=false;
int check[MAXN][MAXN];
int siz[MAXN];


int dx[4] = {-1, 1, 0, 0};
int dy[4] = {0, 0, 1, -1};

void loang1(int u, int v, int L) {
    check[u][v] = 1;
    for (int i = 0; i < 4; ++i) {
        int x = u + dx[i];
        int y = v + dy[i];
        if (x >= 0 && x <= n + 1 && y >= 0 && y <= m + 1 && !check[x][y] && a[x][y] <= L) {
            loang1(x, y, L);
        }
    }
}

void loang2(int u, int v) {
    check[u][v] = 2;
    for (int i = 0; i < 4; ++i) {
        int x = u + dx[i];
        int y = v + dy[i];
        if (x >= 1 && x <= n && y >= 1 && y <= m && check[x][y] == 0) {
            loang2(x, y);
        }
    }
}

int main() {
    faster;
    t = 0;
    while (true) {
        cin >> n >> m;
        if (n == 0 && m == 0) break;
        ++t;

        int gtmin = INT_MAX, gtmax = INT_MIN;
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= m; ++j) {
                cin >> a[i][j];
                gtmin = min(gtmin, a[i][j]);
                gtmax = max(gtmax, a[i][j]);
            }

        // Tạo viền nước biển quanh bản đồ
        for (int i = 0; i <= n + 1; ++i)
            a[i][0] = a[i][m + 1] = 0;
        for (int j = 0; j <= m + 1; ++j)
            a[0][j] = a[n + 1][j] = 0;

        bool splitted = false;
        for (int L = gtmin; L <= gtmax; ++L) {
            memset(check, 0, sizeof(check));
            loang1(0, 0, L);

            int cnt = 0;
            for (int i = 1; i <= n; ++i)
                for (int j = 1; j <= m; ++j)
                    if (check[i][j] == 0) {
                        ++cnt;
                        loang2(i, j);
                    }

            if (cnt > 1) {
                cout << "Case " << t << ": Island splits when ocean rises " << L << " feet." << endl;
                splitted = true;
                break;
            }
        }

        if (!splitted)
            cout << "Case " << t << ": Island never splits." << endl;
    }

    return 0;
}
