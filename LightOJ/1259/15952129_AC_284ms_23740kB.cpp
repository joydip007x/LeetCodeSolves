///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  LOOP(i,L,U)        for(long long int i=(long long int)L;i<U;i++)
#define  LOOPeq(i,L,U)    for(long long int i=(long long int)L;i<=U;i++)
#define  preflag               long long flag=0,i=0,j=0,k=0,l=0
#define  preflag2             long double flag=0,i=0,j=0,k=0,l=0
#define  mem(arr,x)         memset((arr), (x), sizeof((arr)));

#define  pb                          push_back
#define  ppb                        pop_back()
#define  pii                       pair<long long int , long long int >
#define  msi                       map< string,long long int>
#define  vi                           vector<long long int >
#define  iit                          iterator it,it1,it2
#define  iip                       iterator ip,ip1,ip2

#define  sz                         10000009
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                         long long  int
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())

vector< ll > prime;
vector < ll > ::iterator IP;
bool vis[sz+2] ;

void sev(void )
{
    memset(vis, false , sizeof(vis));
     prime.pb(2);
     const ll  sqr=sqrt(sz)+1;
     for(ll i=4 ; i<=sz; i=i+2)
     {vis[i]=true;}
     for (ll i =3 ; i<=sqr; i++)
     {
         if (!vis[i])
         {
            for ( ll j=i*i; j<=sz ; j=j+(2*i))
            {
                vis[j]=true;
            }
         }
     }
     for ( ll i=3 ; i<=sz ; i=i+2)
     {
         if(!vis[i]  ) {prime.pb(i); }
         vis[1]=true ; vis[0]=true;
      }

}
void goldfuc ( ll X , ll k )
{
    ll num=0;
    for (ll i=0 ; prime[i]<=(X/2); i++ )
    {
       ll Fak=X-prime[i];
      if(!vis[Fak]   )
      {
       // cout<<"for the faucking sake of jeus fuking christ > "<<Fak<<"           "<<prime[i]<<endl;
    ///    cout<<"for the faucking sake of jeus fuking christ > "<<vis[Fak]<<"           "<<vis[prime[i]]<<endl;
          num++;
      }
      }
    printf("Case %lld: %lld\n",k,num);
}
int main()
{
        ll n,tcas;
        sev();
        scanf("%lld",&tcas);
       for ( ll k=1 ; k<=tcas ; k++)
        {
          scanf("%lld",&n);
          goldfuc(  n  , k );
        }
}
