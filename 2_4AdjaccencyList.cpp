#include <bits/stdc++.h>
using namespace std;

// Ma trận kề sang danh sách kề
int n, m;
vector<int> adj[1001];
// adj[i] : lưu danh sách kề của đỉnh i
vector<pair<int, int>> edge;
int a[1001][1001];
int main()
{
    cout << "Nhap so dinh cua do thi: ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (a[i][j])
            {
                adj[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        cout << i << " : ";
        for (int x : adj[i])
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}