#include<bits/stdc++.h>
using namespace std;
#define ll int
#define  ret return
///*/////////////////// /// *
/*//    author-joydip007x  ///  */

#define M 17
#define MX 170000
#define pb insert
#define eee cout<<endl
ll n,m,a[M][M],dp[M][MX],vis[M],mins=0;

ll backtx(ll col ,ll res)
{
   if(col>n) ret res;
   if( dp[col][res]!=-1 ) ret dp[col][res];
   for(ll i=1 ; i<=n ; i++){
      if( vis[ i ] ) continue;
      vis[i]=1;
      ll y=0;
      y=backtx(col+1, res+a[col][i]   );
      dp[col][res]=max(dp[col][res],y );
      vis[i]=0;
    }
    ret dp[col][res];

}
int main()
{
    ll t;
    scanf("%d",&t);
    for(ll o=1 ; o<=t; o++){

        scanf("%d",&n); memset(vis,false,sizeof vis);
        memset(dp,-1,sizeof dp);
        memset(a,0,sizeof a);
        for(ll i=1; i<=n ; i++)for(ll j=1; j<=n ; j++) scanf("%d",&a[i][j]);
        ll ans=backtx(1,0);
        printf("Case %d: %d\n",o,ans);
    }
}
/*
2
2
1 5
2 1
3
1 2 3
6 5 4
8 1 2
*/
