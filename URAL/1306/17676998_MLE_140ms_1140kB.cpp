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
#define  o(c)                     scanf("%d",&c);
#define ll int
int main()
{

    int t;
    while( scanf("%d",&t) ==1 )
    {
        priority_queue<ll>pq;
        ll a,i;
        for(i=0 ; i<t/2 +1 ; i++)
        {
            scanf("%d",&a);
            pq.push(a);
        }
        for(   ; i<t ; i++)
        {
            scanf("%d",&a);
            pq.push(a);
            pq.pop();
        }
        if(t%2==1)
           {
               double xx=pq.top();
               printf("%.1lf\n",xx);
           }
        else
        {
            double ff=pq.top();
            pq.pop();
            ff+=pq.top();
            printf("%.1lf\n",ff/2);
//            printf("%d",(a+pq.top())/2);
//            if( (a+pq.top())%2==1 )
//                printf(".5\n");
//            else
//                printf(".0\n");
        }
    }
}
