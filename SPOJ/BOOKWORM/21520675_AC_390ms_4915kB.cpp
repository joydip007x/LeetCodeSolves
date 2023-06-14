#include<bits/stdc++.h>
using namespace std ;

#define ll           long long
#define pb            push_back
#define nikal_laura   ios::sync_with_stdio(false); cin.tie(nullptr);cout.tie(nullptr);
#define sc(c)          scanf("%lld",&c);

const ll sz= 100000+10, mod= 1000000007;

ll t,fact[sz+100],invfact[sz+100];

map<int ,int >m;

ll bigmod( ll a , ll b, ll m){

  if(b==0) return 1%m;
  ll x=bigmod(a,b/2, m);
  x=(x%m*x%m)%m;
  if(b%2) x=(x%m*a%m)%m;
  return x%m;
}
void factor( ){

   fact[0]=1;
   invfact[0]=1;
   for(int i=1; i<=sz+3; i++){

        fact[i]=((((fact[i-1]) )*(i))+mod)%mod;
       //// invfact[i]= (bigmod( (fact[i]) ,mod-2,mod)+mod )%mod;
   }
}
int main(){

      factor();
      sc(t);
      while(t--){

           ll n,b,x,y,ans=1LL;
           sc(n);sc(b);
           vector<int >v;
           map<int ,int >m2;
           m2.clear();v.clear();
           m.clear();
           for(int i=0 ; i<n ; i++){

                sc(x);sc(y);
                if(y==0 ) continue;
                m[x]++;
                v.pb(x);

           }
           if( v.size() < b) {  printf("0\n"); continue ; }
           sort(v.begin(),v.end(),greater<ll>()  ) ;
           for(int i=0 ; i<b; i++){
                 m2[ v[i] ]++;
            }
           for(auto it:m2 ){

                  ll pag=it.first;
                  ll ined= it.second;
                  ll numof =m[pag];
                 /// cout<<pag<<" "<<ined<<" "<<numof<<endl;
                  ans=ans%mod;

                  ll pp=((fact[numof])*((bigmod( (fact[numof-ined]) ,mod-2,mod)+mod )%mod)+0)%mod;

                  pp= ( pp *(bigmod( (fact[ined]) ,mod-2,mod)+mod )%mod+0)%mod;
                  ans=ans*pp;
                  ans=(ans+mod)%mod;
           }
            printf("%lld\n",(ans)%mod);

      }

}
/*
2
5 4
10 0
5 1
2 1
2 1
2 1
*/
