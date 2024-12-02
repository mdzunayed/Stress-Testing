                          /* ...Bismillahir Rahmanir Raheem... */ 

#include<bits/stdc++.h>
using namespace std;
void solve() {
    int n;
    cin>>n;
    int sum = 0;
    for(int i = 1; i <= n; i++) sum+= i;
    cout << sum << '\n';
}

int main()
{ 
   int test=1;
   // cin>>test;
   int i=1;
   while(test--){
    solve();
   //cout<<"Case "<<i++<<":";
   }
}
