#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define ll                        long long
#define MXX 1000000009
int n,xind,t,ind,lmt1,xxxind;
struct Point {ll x,y ; };
Point p[100009],xxx;

ll orient(Point a, Point b,Point c){
  return (b.y-a.y)*(c.x-a.x) - (c.y-a.y)*(b.x-a.x) ;
}
bool cmp(const Point b, const Point c)
{
   ll x=orient( xxx,b,c );
   if(x<0) return true;
   if(x>0) return false;
   ll disb= (xxx.x-b.x)*(xxx.x-b.x)  - (xxx.y-b.y)* (xxx.y-b.y);
   ll disc= (xxx.x-c.x)*(xxx.x-c.x)  - (xxx.y-c.y)* (xxx.y-c.y);
   return (disb<disc);
}
bool cmp2(const Point b, const Point c)
{
   ll x=orient( xxx,b,c );
   if(x<0) return true;
   if(x>0) return false;
   ll disb= (xxx.x-b.x)*(xxx.x-b.x)  - (xxx.y-b.y)* (xxx.y-b.y);
   ll disc= (xxx.x-c.x)*(xxx.x-c.x)  - (xxx.y-c.y)* (xxx.y-c.y);
   return (disb>disc);
}
int main()
{
   scanf("%d",&t);
   while(t--){

    scanf("%d",&n); ind=0;
    xxx.x=xxx.y=MXX;
    for(int i=0 ; i<n ; i++)
    {
        int x,y; char cc;
        scanf("%d %d %c",&x ,&y, &cc);
        if(cc=='N')continue;
        p[ind].x=x ;
        p[ind].y=y;
        if(  x<xxx.x || (x==xxx.x and y<xxx.y) ) { xxx=p[ind] ; xxxind=ind; }
        ind++;
    }
    lmt1=ind;
    swap(p[0], p[xxxind] );
    sort(p+1,p+lmt1, cmp);
    sort( p+1+(lmt1/2) ,  p+lmt1 ,cmp2);
    printf("%d\n",lmt1);
    for(int i=0 ; i<lmt1; i++)
    {
        printf( "%lld %lld\n",p[i].x,p[i].y );
    }

   }

}
/*
5
0 2
6 67
43 71
39 107
189 140
0
/*
2
0 0
7071.0678118654752440084436210485 7071.0678118654752440084436210485
*/
///author-joydip007x         ///
///Time&Date-Whenever i submit///
