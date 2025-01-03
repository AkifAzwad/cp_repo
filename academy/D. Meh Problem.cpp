#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
int vis[N];
std::vector<int> v[N];
std::vector<int> ans;
//////////methods//////////
void dfs(int x) {
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			ans.push_back(p);
			dfs(p);
		}
	}

}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;

	while (m--)
	{
		int x, y;
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}


	priority_queue <int, vector<int>, greater<int> > q;
	q.push(1); vis[1] = 1;
	// ans.push_back(1);
	while (!q.empty()) {
		int x = q.top();
		q.pop();
		// cout << x << endl;
		ans.push_back(x);
		for (auto p : v[x]) {
			if (!vis[p]) {
				// cout << p << " ";
				q.push(p);
				vis[p] = 1;
			}
		}
		// cout << endl;

	}




	for (auto p : ans) {
		cout << p << " ";
	}


	return 0;
}
