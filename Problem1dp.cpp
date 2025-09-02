#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;//输入台阶数
    int dp[100];
    dp[1]=1;
    dp[2]=2;
    for(int i=3;i<=n;i++)
    {
        dp[i]=dp[i-1]+dp[i-2];
        /*dp[i]=dp[i-1]+dp[i-2]
#（第i阶跳法总数等于在第i-1阶时跳一级或者在第i-2阶时跳两级，同时这也是斐波那契数列）
*/
    }
    cout<<dp[n];
    return 0;
}