#include <bits/stdc++.h>
using namespace std;

// Danh Sách Cạnh Sang Ma Trận kề
int n, m;
int a[1001][1001];

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
        a[x][y] = a[y][x] = 1;
    }
    for (int i = 0; i <=n ; i++) {
        a[i][0] = i;
        a[0][i] = i;
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}