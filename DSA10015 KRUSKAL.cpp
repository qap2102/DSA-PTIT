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

int t,n,m;
int a[MAXN][MAXN];
// vector<int> adj[MAXN];
set<int> adj[MAXN];
vector<pair<int,int>> vp;
bool visited[MAXN];
int parent[MAXN];
int color[MAXN];
bool kt=false;

struct kruskal {
    int u, v, w;
};

bool cmp(kruskal a, kruskal b) {
    return a.w < b.w;
}

vector<kruskal> v;
vector<int> A[MAXN];  // Đồ thị tạm để kiểm tra chu trình


void dfs(int u) {
    visited[u] = true;
    for (int x : A[u]) {
        if (!visited[x]) dfs(x);
    }
}

int main() {
    faster;
    int t;
    cin >> t;
    while (t--) {
        v.clear();
        for (int i = 1; i < MAXN; ++i)
            A[i].clear();

        int n, m;
        cin >> n >> m;
        for (int i = 0; i < m; ++i) {  // Sửa chỗ này
            kruskal a;
            cin >> a.u >> a.v >> a.w;
            v.push_back(a);
        }

        sort(v.begin(), v.end(), cmp);

        int res = 0;
        for (auto k : v) {
            memset(visited, false, sizeof(visited));
            dfs(k.u);
            if (!visited[k.v]) {
                res += k.w;
                A[k.u].push_back(k.v);
                A[k.v].push_back(k.u);  // Sửa chỗ này
            }
        }
        cout << res << endl;
    }
}