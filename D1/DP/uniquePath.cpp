#include<iostream>
#include<vector>
#include<bits/stdc++.h>

using namespace std;

// Q62. Unique Paths
// link: https://leetcode.com/problems/unique-paths/description/

// brute force approach
// time : O(2^max(m,n))
// space: O(m*n)

// int path(vector<vector<int>>dp,int m,int n,int cnt)
// {
//     if(m==dp.size() || n==dp[0].size())
//         return 0;
//     else if(m==dp.size()-1 && n==dp[0].size()-1)
//       {
//         cnt++;
//         // cout<<cnt<<endl;
//         return cnt;
//       }
//     else
//        return path(dp,m+1,n,cnt)+path(dp,m,n+1,cnt);
// }

// int main()
// {
//    int m,n;
//    cin>>m>>n;
//    vector<vector<int>>dp(m,vector<int>(n));
//
//    cout<<path(dp,0,0,0);
//
//    return 0; 
// }

/** memorized way Dp approach
  time =O(m*n)
  space=O(m*n)
**/

vector<vector<int>> dp;
int uniquePathsUtil(int m, int n) {
    if(m == 1 || n == 1) return 1;
    if(dp[m][n] != -1)
        return dp[m][n];
    return dp[m][n] = uniquePathsUtil(m-1, n) + uniquePathsUtil(m, n-1);
}
int uniquePaths(int m, int n) {
    dp.clear();
    dp.assign(m+1, vector<int>(n+1, -1));
    return uniquePathsUtil(m, n);
}
int main(){
    cout<<uniquePaths(51, 9);
}