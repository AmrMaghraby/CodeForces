#include<cstdio>
using namespace std;
int main(){
  int n, m, a=0, b=0, x, y;
  scanf("%d%d", &n, &m);
  for(int i=0; i<n; ++i){
    scanf("%d", &x);
    if(x == -1)
      ++a;
    else
      ++b;
  }
  for(int i=0; i<m; ++i){
    scanf("%d%d", &x, &y);
    x = y-x+1;
   if(x%2==0 && x/2<=a && x/2<=b)
    printf("1\n");
   else printf("0\n");
  }
  return 0;
}
