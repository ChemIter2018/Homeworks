#include<iostream>
#include<cstring>
using namespace std;
int fx[4] = {0,1,0,-1};
int fy[4] = {-1,0,1,0};
int ans = 0, n, m;
char a[200][200];
bool p[50000];
void dfs(int x, int y, int z)
{
    ans = max(ans, z);
    for (int i = 0; i < 4; i++)
    {
        int xx = x + fx[i];
        int yy = y + fy[i];
        if(xx<=n && xx>0 && yy<=m && yy>0 && !p[a[xx][yy]])
        {
            p[a[xx][yy]] = true;
            dfs(xx, yy, z+1);
            p[a[xx][yy]] = false;
        }
    }
}

int main()
{
    memset(p, false, sizeof(p));
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> a[i][j];
        }
    }
    p[a[1][1]] = true;
    dfs(1,1,1);
    cout<<ans<<endl;
    return 0;
}