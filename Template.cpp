/*
Author : wolgwang :D
*/
#include <bits/stdc++.h>
using namespace std;
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x << " ";  _print(x);   cerr << endl;
#define debug2(x,y) cerr << #x << " ";  _print(x); cerr <<" "<<#y<< " ";  _print(y);  cerr << endl;
#else
#define debug(x)
#define debug2(x,y) 
#endif
#define fastio() ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL)
#define MOD 1000000007
#define MOD1 998244353
#define INF 1e18
#define in(n) int n; cin >> n;
#define inll(n) ll n; cin >> n;
#define in2(x, y) int x, y; cin >> x >> y;
#define inll2(x, y) ll x, y; cin >> x >> y;
#define ins(s) string s; cin >> s;
#define vi vector<int>
#define vll vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define pi pair<int, int>
#define pll pair<ll, ll>
#define nline "\n"
#define pb push_back
#define ppb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
void _print(ll t) { cerr << t; }
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> pfx);template <class T>
void _print(vector<T> v1);template <class T>
void _print(deque<T> v1);template <class T>
void _print(set<T> v1);template <class T, class V>
void _print(unordered_set<T> v1);template <class T, class V>
void _print(map<T, V> v1);template <class T>
void _print(multiset<T> v1);template <class T, class V>
void _print(pair<T, V> pfx){cerr << "{";_print(pfx.ff);cerr << ",";_print(pfx.ss);cerr << "}";}
template <class T>void _print(vector<T> v1){cerr << "[ ";for (T i : v1){_print(i);cerr << " ";}cerr << "]";}
template <class T>void _print(deque<T> v1){cerr << "[ ";for (T i : v1){_print(i);cerr << " ";}cerr << "]";}
template <class T>void _print(set<T> v1){cerr << "[ ";for (T i : v1){_print(i);cerr << " ";}cerr << "]";}
template <class T>void _print(unordered_set<T> v1){cerr << "[ ";for (T i : v1){_print(i);cerr << " ";}cerr << "]";}
template <class T>void _print(multiset<T> v1){cerr << "[ ";for (T i : v1){_print(i);cerr << " ";}cerr << "]";}
template <class T, class V>void _print(map<T, V> v1){cerr << "[ ";for (auto i : v1){_print(i);cerr << " ";} cerr << "]";}

void solve()
{
    
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("Error.txt", "w", stderr);
#endif
    fastio();
    int testcases = 1;
    cin >> testcases;
    for (int testcase = 1; testcase <= testcases; testcase++)
    {
        debug(testcase);
        solve();
    }
}
