#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[100], n = 0;
    string line;
    getline(cin, line); // 读取一整行输入（按回车结束）
    istringstream iss(line); // 将字符串转为输入流
    while (n < 100 && iss >> nums[n]) n++; // 从流中提取整数
    int current_MAX[100]={0};
    current_MAX[0]=nums[0];
    int global_MAX[100]={0};
    global_MAX[0]=nums[0];
    for(int i=1;i<n;i++){
        current_MAX[i]=max(nums[i],current_MAX[i-1]+nums[i]);
        global_MAX[i]=max(global_MAX[i-1],current_MAX[i]);
    }
    cout<<global_MAX[n-1];
    return 0;
}