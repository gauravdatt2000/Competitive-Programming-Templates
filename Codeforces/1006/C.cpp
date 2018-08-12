/*
 * Deleted code is debugged code :)
 */
#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define vi vector<ll>
#define pp pair<ll,ll>
#define mp make_pair
#define PI acos(-1.0)
#define all(v) v.begin(),v.end()
#define pb push_back
#define FOR(i,a,b) for(i=a;i<b;i++)
#define FREV(i,a,b) for(i=a;i>=b;i--)
#define FORI(a) for(auto it=a.begin();it!=a.end();it++)
#define READ(a,i,n) FOR(i,0,n) { sll(a[i]);}
#define DEBUG(x) cerr<<"In file "<< __FILE__ <<" at line "<< __LINE__ <<" :: "<< #x <<" = "<<x<<endl
#define sll(n) scanf("%lld", &n)
#define si(n) scanf("%d", &n)
#define ss(n) scanf("%s", n)
#define sc(n) scanf("%c", &n)
#define INF 1000000000000007
#define MOD 1000000007

using namespace std;

template<typename T>
void prn(T first) {
    cout << first << "\n";
}

template<typename T, typename... Args>
void prn(T first, Args... args) {
    cout << first << " ";
    prn(args...);
}

/*******************************************RANDOM STUFF BEGINS HERE**************************************************/


int main() {
	ll i,j,t,n,pre;
	sll(n);
	vi a(n), suf(n);
	READ(a,i,n);
	pre = a[0];
	map<ll,ll> m;
	m[a[0]] = 0;
	FOR(i,1,n) {
		pre = pre + a[i];
		m[pre] = i;
	}
	suf[n-1] = a[n-1];
	FREV(i,n-2,0) {
		suf[i] = suf[i+1] + a[i];
	}
	ll mx = 0;
	FREV(i,n-1,0) {
		if (m.find(suf[i]) != m.end() && m[suf[i]] < i && suf[i] > mx) {
			//prn(suf[i], m[suf[i]], i);
			mx = suf[i];
		}
	}
	printf("%lld\n", mx);
	return 0;
}