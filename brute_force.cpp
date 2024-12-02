                          /* ...Bismillahir Rahmanir Raheem... */ 

#include<bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define all(a) (a).begin(),(a).end()
#define nl cout<<'\n' ;
#define dbg(x) cerr<<"Line no- "<<__LINE__<<": "<<#x<<" = "<<x<<'\n';
#define out(a) cout<<a<<'\n'; 
#define hmm(ok) cout<<(ok==1?"YES":"NO")<<'\n';
#define ld long double
#define ll long long
#define ull unsigned long long
const ld PI = 3.141592653589793238462;
const ll MOD = 1e9+7;
const ll INF = 1e18;

void solve() {
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++) sum+= i;
    cout << sum << '\n';
}

int main()
{ 
   faster;
   int test=1;
   // cin>>test;
   int i=1;
   while(test--){
    solve();
   //cout<<"Case "<<i++<<":";
   }
}
