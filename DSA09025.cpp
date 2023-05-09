#include<bits/stdc++.h>
using namespace std;

vector<int> adj[100000];
int par[100000]={};
int trace[10000]={};







void dfs(int u) // Tìm kiếm theo chiều sâu từ u.
{
    for (int v: adj[u])
    {
        if (v == par[u]) // Kiểm tra v không được trùng với cha của u.
            continue;

        par[v] = u; // Đặt cha của v là u.
        dfs(v); // Tiếp tục tiến vào con của u.
    }
}

void trace(int s, int f)
{
    vector < int > path; // Lưu đường đi từ s tới f.
    while (f != 0)
    {
        path.push_back(f);
        f = trace[f];
    }

    for (int i = path.size() - 1; i >= 0; --i) // In ngược lại để thu được thứ tự từ s -> f.
        cout << path[i] << "->";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
	    // Nhập dữ liệu đồ thị.
	    cin >> n >> m >> s >> f;
	    for (int i = 1; i <= m; ++i)
	    {
	        int u, v;
	        cin >> u >> v;
	        adj[u].push_back(v);
	        adj[v].push_back(u);
	    }
	
	    dfs(s); // Tìm kiếm theo chiều sâu bắt đầu từ s.
	
	    if (trace[f] == 0) cout << "-1";
	    else
	        trace(s, f); // Truy vết đường đi từ s tới f.
	}
}

