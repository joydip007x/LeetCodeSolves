#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define nl '\n'
#define deb(x) cerr<<#x" = "<<x<<nl
#define in() ( { int a ; scanf("%d",&a); a; } )

 
const int N = 5e5 + 9;
const int mod = 1e9 + 7;
ll n,x,t;
vector<ll>v ;
multiset<ll>s1,s2;
set<ll>s3,s4; 

#define sz 50000
vector <ll> prime;
bool vis[sz];

void seive(){

	memset(vis,false,sizeof(vis));
	prime.push_back(2);
	for( int i=4 ; i <sz ; i=i+2) vis[i]=true ;  
	for (int i = 3; i * i <= sz; i++) {
		if(vis[i] == 0) 
		{
			for (int j = i * i; j <= sz; j += 2 * i) 
			{
				vis[j] = 1;
			}
		}
	}
	for (int i = 3; i <= sz; i += 2) {if(vis[i] == 0) {prime.push_back(i);}}
}
int main()
{
   //freopen("input.txt", "r+", stdin);
   //freopen("output.txt", "w+", stdout);

    ios_base::sync_with_stdio(0);cin.tie(nullptr); cout.tie(nullptr); 
    cin>>t;
    while(t--){

            cin>>n;
            s3.clear();
            s3.insert(0); s3.insert(1);s3.insert(n);
            for(int i=2 ; i*i<=n  ; i++) {
            	  s3.insert(i), s3.insert(n/i);
            }
		    cout<<s3.size()<<endl;
            for(auto i:s3)cout<<i<<" ";cout<<endl;

    }

  return 0;
}



///author-joydip007x         ///
///Time&Date-Whenever i submit///
    	 	  		    	 			  		  		 		