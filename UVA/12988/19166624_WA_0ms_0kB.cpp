#include<bits/stdc++.h>
using namespace std;
#define  pb                          push_back
#define  sz                         1000000
#define ll                        int

int n,lmt,rv[7][7],cv[7][7];
char g[7][7], s[99],spc=35;
bool valid(){
   for(int i=0;i<4;i++)
            for(int j=1;j<=4;j++) if(rv[i][j] || cv[i][j] ) return 0;
             ///cout<<rv[i][j]<<"<"<<cv[i][j]<<endl;
   return true;
}
ll backtrx(int row, int col ){
  if(row==4 ) {
        if(valid()) return 1;
        return 0;
  }
  if(col<3 and g[row][col]!='*' ) return backtrx(row,col+1);
  if(col==3 and g[row][col]!='*' ) return backtrx(row+1,0);
  if(g[row][col]=='*'){
    for(int i=1; i<=4 ; i++){

        if( !rv[ row ][i] || !cv[col][i]  )continue;
        rv[ row ][i]=cv[col][i]=0;
        g[ row][col]=i+48;
       /// cout<<g[row][col]<<endl;
        if(col<3) { if(backtrx(row,col+1)) return 1;}
        else { if( backtrx(row+1,0)) return 1; }
        rv[ row ][i]=cv[col][i]=1;
        g[row][col]='*';
    }
  }
  return 0;
}
int main()
{
    int ccc=0;
    scanf("%d\n",&n);
    for(int cas=0; cas<n; cas++){

         memset(rv,0,sizeof rv);
         memset(cv,0,sizeof cv);
         memset(g,0,sizeof g);
        for(int i=0;i<4;i++)
            for(int j=1;j<=4;j++) rv[i][j]++,cv[i][j]++;
        for(int i=0 ; i<4; i++){
            scanf("%s",&s);
            ///cout<<"io:"<<s<<endl;
            for(int j=0 ; j<4;j++){
                g[i][j]=s[j];
                if(s[j]=='*') continue;
                ///r[i].erase(r[i].find( s[j]-48));c[j].erase(c[j].find( s[j]-48));
                rv[i][s[j]-48]--;
                cv[j][s[j]-48]--;
            }
        }
//        for(int i=0;i<4;i++){cout<<"row- "<<i<<endl;
//            for(int j=1;j<=4;j++) cout<<j<<" "<<rv[i][j]<<" : "<<cv[i][j]<<endl;
//        }
        int o=backtrx(0,0);
        ////cout<<o<<" ::: oo\n";
        printf("Case %c%d:\n",spc,cas+1);
       for(int i=0;i<4;i++){
            for(int j=0;j<4;j++)
                 cout<<g[i][j];
            printf("\n");
       }
    }
}
/*
3

****
2341
4123
3214

*243
*312
*421
*134

*41*
**3*
2*41
4*2*
*/
///joydip007x ///
///Date&Time: whenever i submit*///
