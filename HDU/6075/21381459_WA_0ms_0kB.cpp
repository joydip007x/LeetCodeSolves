#include<bits/stdc++.h>
using namespace std ;

#define ll long long 
#define pb push_back
int main(){


  ll t;
  scanf("%lld",&t);
   for(int i=0 ; i<t ; i++){

      ll n;
      scanf("%lld",&n);
      vector<ll>v;
      map<ll,ll>m;
      ll mx=-1 ,k,a1;
      for(int j=0 ; j< n ; j++) {

        ll x;
      scanf("%lld",&x);
        v.pb(x);
      }
      sort(v.begin() , v.end() );
      for(int i=1 ; i<v.size() ; i++) m[ v[i]-v[i-1] ]++;

      for(auto it:m) {
         if( it.second >=mx and it.first>1  )
          {  mx=it.second ; a1=it.first ;}
      }
      for(int i=1 ; i<v.size() ; i++)
      {
          if(v[i]-v[i-1]==a1)  {k=v[i]%a1;break; }
      }

     printf("%lld %lld\n",a1,k);
   }

}
