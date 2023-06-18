/**
 * Base
 * Dependencies: None
 */

#include "bits/stdc++.h"
using namespace std;

#define td typedef
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

td long long ll;
td double db;
td pair<int, int> pii;
td map<int, int> mii;
td set<int> si;
td string str;
td vector<int> vi;
td vector<vi> v2i;
td vector<si> vsi;
td vector<ll> vl;
td vector<vl> v2l;
td vector<db> vd;
td vector<vd> v2d;
td vector<bool> vb;
td vector<pii> vp;

void fastIO() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
}
void fileIO(string file) {
	freopen((file + ".in").c_str(), "r", stdin);
	freopen((file + ".out").c_str(), "w", stdout);
}

// Debugging an arbitrary value or vector of values
template <class T>
void debug(string s, vector<T> a) {
	cerr << "[Debug] " << s << " = ";
	for (int i = 0; i < a.size(); i++) {
		cerr << a[i];
		if (i < a.size() - 1) cerr << ", ";
	}
	cerr << '\n';
}
template <class T>
void debug(string s, T x) {
	debug(s, vector<T>({x}));
}
template <class T>
void debug(T x) {
	debug("*", x);
}

void solve() {

}

int main() {
	fastIO();
	int T = 1;
	cin >> T;
	while (T--) solve();
}