#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;//读入行数m和列数n
    int dp[100][100];
    for(int i=1;i<=n;i++){
        dp[1][i]=1;
    }
    for(int i=1;i<=m;i++){
        dp[i][1]=1;
    }//初始化第一行和第一列
    for(int i=2;i<=m;i++){
        for(int j=2;j<=n;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1];
        }
    }
    /*dp[i][j]=dp[i-1][j]+dp[i][j-1]
#（相当于在走到点(i-1,j)的基础上向右走一格，或者是在点(i,j-1)的基础上向下走一格）*/
    cout<<dp[m][n];
    return 0;
}