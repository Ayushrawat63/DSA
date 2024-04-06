#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <vector>
#include <map>
using namespace std;

// Q1: total ways to reach the nth stair
// link :https://leetcode.com/problems/climbing-stairs/

// using Recrusion
//
// int ways(int n)
// {
//     if(n<0)
//       return 0;
//     else if(n==0 || n==1)
//       return 1;
//     else
//       return ways(n-3)+ways(n-2)+ways(n-1);
// }
// int main()
// {
//     int n;
//     cin>>n;
//     cout<<ways(n);
//     return 0;
// }

// Memoization Dp
//
// int ways(vector<int>& dp,int n)
// {
//     if(n<0)
//       return 0;
//     else if(n==0 || n==1)
//     {
//         dp[n]=1;
//         return dp[n];
//     }
//     if(dp[n]!=-1)
//         return dp[n];
//
//         dp[n]=ways(dp,n-3)+ways(dp,n-2)+ways(dp,n-1);
//       return dp[n];
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>dp(n+1,-1);
//     for(int i=0;i<n+1;i++)
//     {
//         cout<<dp[i]<<" ";
//     }
//     cout<<endl;
//     cout<<ways(dp,n)<<endl;
//     for(int i=0;i<n+1;i++)
//     {
//         cout<<dp[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// Tabulation DP

// int  ways(vector<int>& dp,int d)
// {
//     if(d<0)
//        return -1;
//     else if(d==1 || d==0)
//       return dp[d];
//     else if(d==2)
//        return dp[d];
//      for(int i=3;i<=d;i++)
//      {
//       dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
//      }
//      return dp[d];
// }
// int main()
// {
//     int n;
//     cin>>n;
//     vector<int>dp(n+1);
//     dp[0]=1;
//     dp[1]=1;
//     dp[2]=2;
//     for(int i=0;i<dp.size();i++)
//     {
//         cout<<dp[i]<<" ";
//     }
//     cout<<endl;
//     cout<<ways(dp,n)<<endl;
//     for(int i=0;i<dp.size();i++)
//     {
//         cout<<dp[i]<<" ";
//     }
//     cout<<endl;
//     return 0;
// }

// DP optimized

// int main()
// {
//     int d;
//     cin>>d;
//     int a=1,b=1,c=2,temp;
//     if(d<0)
//        return -1;
//     else if(d==1 || d==0)
//       return a;
//     else if(d==2)
//        return c;
//
//      for(int i=3;i<=d;i++)
//      {
//       temp=a+b+c;
//       a=b;
//       b=c;
//       c=temp;
//      }
//      cout<<c<<endl;
//     return 0;
// }

// Q2 : min. step to reach nth stair
// link:

int minval(int x, int y, int z)
{
    if (x < y)
        return (x < z) ? x : z;
    else
        return (y < z) ? y : z;
}
int ways(int n)
{
    if (n < 0)
        return INT_MAX;
    else if (n == 0 || n == 1 || n==2 || n==3)
        return 1;
    else
        return minval(ways(n - 3), ways(n - 2), ways(n - 1)) + 1;
}
int main()
{
    int n;
    cin >> n;
    cout << ways(n);
    return 0;
}
