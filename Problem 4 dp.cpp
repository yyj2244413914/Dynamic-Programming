#include<bits/stdc++.h>//一次性包含所有标准库，无需手动添加
using namespace std;
int main(){
   int c,n;
  scanf("%d %d",&c,&n);//读入背包容量c以及物品件数n
  int w[100],v[100];
  for(int i=1;i<=n;i++){
    scanf("%d %d",&w[i],&v[i]);
  }//读入每件物品的重量以及价值
  /*
根据状态转移方程：
dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i])  (j>w[i])
        =dp[i-1][j]                            (j<=w[i])
*/
  int dp[100][100]={0};//初始化为0
  for(int i=1;i<=n;i++){
    for(int j=1;j<=c;j++){
      if(j>=w[i])dp[i][j]=max(dp[i-1][j],dp[i-1][j-w[i]]+v[i]);
      else dp[i][j]=dp[i-1][j];
    }
  }
  printf("%d",dp[n][c]);
  return 0;
}
