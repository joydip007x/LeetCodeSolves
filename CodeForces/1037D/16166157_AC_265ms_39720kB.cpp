
///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///
/*
     If opportunity doesn't knock, build a door.
    Success is how high you bounce when you hit bottom.
*/
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

#define  sz                         1000004
#define  check(x)             cout<<":::"<<x<<":::"<<endl
#define  dcheck(x,y)       cout<<":::"<<x<<":::"<<y<<endl
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define  mz(c,r)               long long r=c;while(c--)
#define  till(c)                 while(c--)
#define TEST_CASE(t)      for(ll int z=1;z<=t;z++)

#define  fs                       first
#define  sc                      second
#define  pi                         acos(-1.0)
#define  eps                     1e-9

#define  gaira                 printf("::: pias necroxoda :::::::::::::  \n")
#define notrue                 false
#define ifnot                     else
#define eee                     cout<<'\n'
#define ll                        long long
#define debug(x)           cout << '>' << #x << ':' << x << endl;
#define fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);
#define all(x)                  x.begin(),x.end()
#define srt(v)                   sort(v.begin(),v.end())
#define  ret                     return

set < ll > graph [sz ];vector<ll>c;
///bool vis[ sz ];
ll pos=1;
bool BFS ( ll start  )
{
    ///vis[ start ]=true;
    queue< ll > Q;
    Q.push( start );
    while ( ! Q.empty () )
    {
      ///  pos++;
        ll now=Q.front() ; Q.pop();
     while ( !graph[now].empty() )
        {
            ++pos;
            ll cxc=c [pos];
            if( graph[now].find(cxc)==graph[now].end()  ) {ret false ;}
            graph[ now].erase( cxc );
             graph [ cxc ].erase ( now );
            Q.push(cxc);
        }
    }
    ret true;
}
int main()
{
    fast;
    ll nod,popo; ///cin>>nod;
    scanf("%lld",&nod);
    LOOP(i,0,nod-1)
    {
        ll x,y; ///cin>>x>>y;
        scanf("%lld",&x);
        scanf("%lld",&y);
        graph[ x ].insert(y );
        graph [ y].insert(x);
    }
   /// mem(vis,false );
     pos=0;
    LOOP(i,0,nod )
    {
        ///cin>>popo;
        scanf("%lld",&popo);
        c.pb(popo);
    }
    ///reverse(all(c));
    if (c[0]!=1) {    cout<<"No"; ret 0 ;}
    bool fuc=BFS(  1 );
    if(!fuc) {
          ///  printf("No\n");ret 0;
            cout<<"No"; ret 0 ;
    }
   cout<<"Yes";
     /// printf("Yes\n");ret 0;
}
/*
I don't need anything to get me through the night
Except the beat that's in my heart
Yeah, it's keeping me alive
I don't need anything to make me satisfied
'Cause the music fills me good and it gets me every time ---( Me, Myself & I )Bebe Rexha, G-Eazy
*/