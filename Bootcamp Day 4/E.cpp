#include <bits/stdc++.h>
#include <numeric>
using namespace std;

#define mp             make_pair
#define pb             push_back
#define fi             first
#define se             second
#define sz(x)          (int)((x).size())
#define fill(x, y)     memset(y, x, sizeof(y))
#define all(x)         (x).begin(), (x).end()
#define ci(x)         long long x;       cin>>x;
#define cii(x, y)     int x, y;    cin>>x>>y;
#define ciii(x, y, z) ll x, y, z; cin>>x>>y>>z;
#define TC(x)          ci(x); while(x --)
#define rep(i, x, y)   for (int i = x; i <= y; i ++)
#define repr(i, x, y)  for (int i = x; i >= y; i --)
#define forn(i, n)     for(int i = 0; i < n; i++)
#define fore(itr, x)   for (itr = x.begin(); itr != x.end(); itr ++)
#define forei(itr, x)  for (itr = x.end() - 1; itr != x.begin() - 1; itr --)
#define endl "\n"
typedef unsigned long long      ull;
typedef long long      ll;
typedef pair<int, int> ii;
typedef pair<int, ii>  iii;
typedef vector<int>    vi;
typedef vector<ii>     vii;
typedef vector<iii>    viii;
const   int            inf = 1e9 + 5;
const   double         eps = 0;
const   int            ms = 0;
const   int            md = 0;
const   int            N = 1e3+5;

vector <pair <int, <pair<int,int>>> edges;
vector <int> tree_id(N)

void init(){
    forn(i, n){
        tree_id[i] = i;
    }
}

int find_set (int v){
    while(tree_id[v] != v){
        tree_id[v] = tree_id[tree_id[v]];
        v = tree_id[v];
    }
}

void union_set (int u, int v) {
    int p = root(u);
    int q = root(y);
    
}

void solve(){
    int n, m;
    cin >> n >> m;
    forn(i, m){
        int u, v, w;
        cin >> u >> v >> w;
        edges.pb(mp(mp(u, v), w));
    }
}

int main() {
    //freopen("textin.inp","r",stdin);
    //freopen("text.out", "w", stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    solve();
}
