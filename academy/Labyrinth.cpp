#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;

/////direction_array///////
#define valid(nx,ny) nx>=0 && nx<row && ny>=0 && ny<col
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
char dir[] = {'D', 'U', 'R', 'L'};

/////////constants/////////
//const int mod = 1e9 + 7;
int row, col;
const int N = 1005;
string s[N];
bool vis[N][N];
int dis[N][N];
pair< std::pair<int, int>, char >   par[N][N];
string path;
int found = 0;
//////////methods//////////
void dfs(int l1, int r1) {

	queue<std::pair<int, int> > q;
	q.push({l1, r1});
	vis[l1][r1] = true;
	while (!q.empty()) {
		std::pair<int, int> u = q.front();
		int l, r;
		l = u.first; r = u.second;
		q.pop();
		for (int i = 0; i < 4; ++i) {
			int x, y;
			x = fx1[i]; y = fy1[i];
			if (valid(l + x, r + y) && s[l + x][r + y] != '#') {
				if (!vis[l + x][r + y]) {

					q.push({l + x, r + y});
					par[l + x][r + y] = {u, dir[i]};
					dis[l + x][r + y] = dis[l][r] + 1;
					// cout << u.first << " " << u.second << ": ";
					// cout << l + x << " " << r + y << "\n";
					// cout << dir[i] << endl;

					if (s[l + x][r + y] != 'B')vis[l + x][r + y] = true;
					else {
						// cout << dis[l + x][r + y] << endl;
						found = 1;
						string cur_path;
						int cur_x, cur_y;
						std::pair<int, int> p;
						char val;
						cur_x = l + x; cur_y = r + y;
						val = par[cur_x][cur_y].second;
						// cout << cur_x << " " << cur_y << endl;
						// cout << val << endl;
						int cnt = 0;
						while (1) {
							// cout << cur_x << " " << cur_y << endl;
							// cout << val << endl;


							p = par[cur_x][cur_y].first;
							val = par[cur_x][cur_y].second;
							cur_x = p.first; cur_y = p.second;
							cur_path += (val);
							if (p.first == l1 && p.second == r1)break;
							cnt++;
							if (cnt > 1e6)break;
						}

						if (cur_path.size() < path.size() || path.size() == 0)path = cur_path;

					}
				}

			}
		}
	}

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> row >> col;
	for (int i = 0; i < row; ++i) {
		cin >> s[i];
	}
	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (s[i][j] == 'A') {
				dfs(i, j);
				break;
			}
		}
	}


	if (found) {
		cout << "YES\n";
		reverse(path.begin(), path.end());
		cout << path.size() << endl;
		cout << path << endl;
	} else cout << "NO\n";
	return 0;
}