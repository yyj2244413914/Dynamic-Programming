#include<bits/stdc++.h>//一次性包含所有标准库，无需手动添加
using namespace std;
int main(){
  int n,k;
  scanf("%d %d",&n,&k);//读取控制台的总零钱n以及硬币种类k,也可以用“cin>>n>>k;”语句
  int coin[100];
  for(int i=0;i<k;i++){
    scanf("%d",&coin[i]);
  }
  int dp[100]={0};//创建动态规划数组
  //动态规划数组初始化
  for(int i=1;i<=n;i++){
    dp[i]=n+1;//设为较大的初始值，便于后续数组元素的更新
  }
 /* 根据状态转移方程：
 dp[i]=min(dp[i],dp[i-coin]+1)   (i>coin)
     =1                          (i==coin)
     =dp[i]                      (i<coin)
#（其中i需从1到n遍历一遍，为外循环；coin硬币数组也需要遍历一遍，为各个i中的内循环。）
*/
  for(int i=1;i<=n;i+=){
    for(int j=0;j<k;j++){
      if(i>coin[j])dp[i]=min(dp[i],dp[i-coin[j]]+1);
      if(i==coin[j])dp[i]=1;
    }
  }
  printf("%d",dp[n]);
  return 0;
}
