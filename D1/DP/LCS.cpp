//Q1 Longest Commom subsequence (LCS)
// link: https://www.geeksforgeeks.org/problems/longest-common-subsequence-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

#include<iostream>
#include<vector>

using namespace std;

string s1="abdrc";
string s2="abc";

// string s1="ylqpejqbalahwr";
// string s2="yrkzavgdmdgtqpg";

vector<vector<int>>dp;

// Recursive approach
// T:O(2^n+m) 
// S: O(n+m)

// int LCS(int n,int m)
// {
//     if(n==0 || m==0)
//       return 0;
//     else if(s1[n-1]==s2[m-1])
//       return 1+LCS(n-1,m-1);
//     else
//       return max(LCS(n-1,m),LCS(n,m-1));
// }
// int main()
// { 
//     int n=s1.length();
//     int m=s2.length();
//     cout<<LCS(n,m);
//     return 0;
// }


// DP - Memoization
//T:O(n*m)
//T:O(n*m)



// int LCS(int n,int m)
// {
//     if(n==0 || m==0)
//      return 0;
//     else if(s1[n-1]==s2[m-1])
//     {
//         dp[n][m]=1+LCS(n-1,m-1);
//         return dp[n][m];
//     }
//     else if(dp[n][m]!=-1)
//      return dp[n][m];
//    
//     dp[n][m]= max(LCS(n-1,m),LCS(n,m-1));
//     return dp[n][m];
// }
// int main()
// {
//     int n=s1.length();
//     int m=s2.length();
//     dp.clear();
//     dp.assign(n+1,vector<int>(m+1,-1));
//     cout<<dp.size()<<endl;
//     cout<<dp[0].size()<<endl;
//     for(int i=0;i<dp.size();i++)
//     {
//         for(int j=0;j<dp[0].size();j++)
//         {
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//    cout<<LCS(n,m)<<endl;
//     for(int i=0;i<dp.size();i++)
//     {
//         for(int j=0;j<dp[0].size();j++)
//         {
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//
// }

// dP-Tabulation approach

// int main()
// {
//     int n=s1.length();
//     int m=s2.length();
//     dp.clear();
//     dp.assign(n+1,vector<int>(m+1));
//
//     for(int i=0;i<=n;i++)
//     {
//         for(int j=0;j<=m;j++)
//         {
//             if(i==0 || j==0)
//               dp[i][j]=0;
//             else if(s1[i-1]==s2[j-1])
//               dp[i][j]=1+dp[i-1][j-1];
//             else 
//               dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
//         }
//     }
//
//     for(int i=0;i<dp.size();i++)
//     {
//         for(int j=0;j<dp[0].size();j++)
//         {
//             cout<<dp[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     cout<<endl;
//
//     cout<<dp[n][m];
//
//     return 0;
// }


// Q2: Longest common substring (LCS)
// link:https://www.geeksforgeeks.org/problems/longest-common-substring1452/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article/


// Recursive approach
// time:O(3^n+m)
// space:O(m)

int LCS(int n,int m,int cnt)
{
   if(n==0 || m==0)
     return cnt;
    else if(s1[n-1]==s2[m-1])
      return LCS(n-1,m-1,cnt+1);
      cnt= max(cnt,max(LCS(n-1,m,0),LCS(n,m-1,0)));
    return cnt;
}

int main()
{
    int n=s1.length();
     int m=s2.length();

     cout<<LCS(n,m,0);

    return 0;
}
