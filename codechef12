#include<bits/stdc++.h> // AFLIP
#define int long long
using namespace std;
int n,m,x;
void solve() {
  vector<int> a,b,c,d;
  cin >> n >> m;
  if(n==1||m==1) {
    for(int i=0;i<n;++i)
      for(int j=0;j<m;++j) {
        cin >> x;
        a.push_back(x);
      }
    for(int i=0;i<n;++i)
      for(int j=0;j<m;++j) {
        cin >> x;
        b.push_back(x);
      }
    if(a==b) puts("YES");
    else puts("NO");
    return;
  }
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j) {
      cin >> x;
      if((i^j)%2) a.push_back(x);
      else b.push_back(x);
    }
  for(int i=0;i<n;++i)
    for(int j=0;j<m;++j) {
      cin >> x;
      if((i^j)%2) c.push_back(x);
      else d.push_back(x);
    }
  sort(a.begin(),a.end());
  sort(b.begin(),b.end());
  sort(c.begin(),c.end());
  sort(d.begin(),d.end());
  if(a==c&&b==d) puts("YES");
  else puts("NO");
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
// ------------------------------------------------------------------------------------------
#include<bits/stdc++.h> // SMALLXOR
#define int long long
using namespace std;
int n,x,y,t;
priority_queue<pair<int,int>> p,nul;
map<int,vector<int>> k;
void otto() {
  while(!p.empty()) {
    cout << -p.top().first << ' ';
    p.pop();
  }
  cout << endl;
}
void solve() {
  p=nul;k.clear();
  cin >> n >> x >> y;
  for(int i=1;i<=n;++i) {
    cin >> t;
    p.push({-t,i});
  }
  for(int i=1;i<=y;++i) {
    pair<int,int> _={-((-p.top().first)^x),p.top().second};
    k[p.top().second].push_back(i);
    if(k[p.top().second].size()==4) {
      int s=k[p.top().second][3]-k[p.top().second][1];
      i+=(y-i)/s*s;
      for(;i<=y;++i) {
        pair<int,int> t={-((-p.top().first)^x),p.top().second};
        p.pop();
        p.push(t);
      }
      otto();
      return;
    }
    p.pop();
    p.push(_);
  }
  otto();
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
// ------------------------------------------------------------------------------------------
#include<bits/stdc++.h> // HLEQN
#define int long long
using namespace std;
int x;
void solve() {
  cin >> x;
  for(int i=1;i*i<=x;++i)
    if((x-2*i)%(i+2)==0&&x!=2*i) {
      puts("YES");
      return;
    }
  puts("NO");
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
// ------------------------------------------------------------------------------------------
#include<bits/stdc++.h> // TWOTRAINS
#define int long long
using namespace std;
int s,m,n,x;
void solve() {
  cin >> n;m=0;s=0;
  for(int i=1;i<n;++i) {
    cin >> x;
    s+=x;m=max(m,x);
  }
  cout << s+m << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
// ------------------------------------------------------------------------------------------
#include<bits/stdc++.h> // EQUALISE
#define int long long
using namespace std;
void solve() {
  int a,b;
  cin >> a >> b;
  if(a>b) swap(a,b);
  if((b%a==0)&&((b/a)==((b/a)&-(b/a))))
    puts("YES");
  else
    puts("NO");
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
// ------------------------------------------------------------------------------------------
#include<bits/stdc++.h> // SALESEASON
#define int long long
using namespace std;
void solve() {
  int n;
  cin >> n;
  if(n>5000) n-=500; else
  if(n>1000) n-=100; else
  if(n>100) n-=25;
  cout << n << endl;
  
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
// ------------------------------------------------------------------------------------------
#include<bits/stdc++.h> // MAXIMUMSUBS
#define int long long
using namespace std;
void solve() {
  int n;
  cin >> n;
  cout << n*2 << endl;
}
signed main() {
  int T;
  cin >> T;
  while(T--) solve();
}
