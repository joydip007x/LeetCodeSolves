///*/////////////////// /// *
/*//    author-joydip007x  ///  *
/ *///  <^> <^ <^> <^> /// *
///*<^> Never tired :)<^>:V*///
//*/*** Never Give UP ***///
///     Date<^>XX/08/2018    *///

#include<bits/stdc++.h>

using namespace std;

#define  loop(i,L,U)        for( int i=(int)L;i<U;i++)
#define  loopeq(i,L,U)    for( int i=(int)L;i<=U;i++)
#define  i(c)                     cin>>c
#define  o(c)                     scanf("%lld",&c);
#define ll long long int
int main()
{
 priority_queue<ll>pq;
 ll t,a,x;
 o(t);
 loopeq(i,0,t/2)
 {
     o(x);
     pq.push(x);
 }
 loop(i,t/2+1 , t)
 {
     o(x);
     if(x<pq.top())
     {
         pq.pop();pq.push(x);
     }
 }
 if(t&1) printf("%lld\n",pq.top());
 else
 {
     a=pq.top();pq.pop();
     x=pq.top(); pq.pop();
     printf("%lld",(a+x)/2);
     if( (a+x) %2 ) printf(".5\n");
     else printf("\n");
 }
}
