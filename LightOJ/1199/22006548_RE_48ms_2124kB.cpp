#include<bits/stdc++.h>
using namespace std;
typedef int  ll;

#define sc(c) scanf("%d",&c) 
#define qq printf("Bob\n");
#define pp printf("Alice\n");

const int sz=10000+100;
int dp[sz];

ll rec(ll x, ll lmt){
    
    if(x<=2 || lmt==0 || dp[x]!=-1 ) return dp[x];
	ll tmp[x+10];
	for(int i=0; i<=x; i++) tmp[i]=0;
	for(int i=1; i<=lmt ;i++){

		ll p=i , q=x-i;
		ll r=(i-1)/2 , s= (q-1)/2; 
		tmp[ rec(p,r)^rec(q,s) ]++;
	}
	for(int i=0;  ;i++) if(tmp[i]<=0 ) return dp[x]=i;
}
int main()
{
    
    int t,cas=1;
    sc(t); 
    while(t--){

        ll n;
    	printf("Case %d: ",cas++);
    	sc(n);
    	for(int j=0; j<=sz+5; j++) dp[j]=-1;
    	ll  r=0;
        dp[0]=dp[1]=dp[2]=0;
    	for(int i=0;i<n;i++) {  
            
            ll x;
    		sc(x); 
    		r=r^rec(x,(x-1)/2) ;
    	}
        if(r) {pp;}
        else {qq;}
    }
    
}





///author-joydip007x         ///
///Time&Date-Whenever i submit///