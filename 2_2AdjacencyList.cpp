#include <bits/stdc++.h>
using namespace std;

// Danh sách cạnh sang danh sách kề
int n, m;
vector<int> adj[1001];
// adj[i]: lưu danh sách kề của đỉnh i

int main()
{
    cout << "Nhap So Dinh Cua Do Thi: ";
    cin >> n;
    cout << "Nhap So Canh Cua Do Thi: ";
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x, y;
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    for (int i = 0; i <= n; i++)
    {
        cout << i << " : ";
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
}