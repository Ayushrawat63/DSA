//Longest Increasing subsequence (LIS)

#include<iostream>
#include<vector>


using namespace std;

// Q1: Longest Increasing Subsequence (LIS)
// link:https://www.geeksforgeeks.org/problems/longest-increasing-subsequence-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article

// Approach Dp 
// time : O(n^2)
//   space : O(n)

// int main()
// {
//     vector<int> vec1={3,10,2,1,20};
//     vector<int> dp(vec1.size(),1);
//    for(int i=0;i<dp.size();i++)
//     {
//          cout<<dp[i];
//     }
//     cout<<endl;
//
//     for(int i=1;i<vec1.size();i++)
//     {
//         for(int j=0;j<i;j++)
//         {
//             if(vec1[i]>vec1[j] && dp[j]+1>dp[i])
//                dp[i]=dp[j]+1;
//         }
//     }
//     for(int i=0;i<dp.size();i++)
//     {
//          cout<<dp[i];
//     }
//     cout<<endl;
//     int maxval=0;
//     for(int i=0;i<dp.size();i++)
//     {
//         maxval=max(maxval,dp[i]);
//     }
//     cout<<maxval<<endl;
//     return 0;
// }


// binary search 
// time : O(n*log(n))
//   space : O(n)


// Q4: Maximum sum increasing subsequence
// link: https://www.geeksforgeeks.org/problems/maximum-sum-increasing-subsequence4749/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=bottom_sticky_on_article


int main()
{
    vector<int> vec1={7,1,4,8,11,2,14,3};
    vector<int> dp(vec1.size());
    dp=vec1;
    // for(int i=0;i<vec1.size();i++)
	//     {
	//         dp[i]=vec1[i];
	//     }
   for(int i=0;i<dp.size();i++)
    {
         cout<<dp[i]<<" ";
    }
    cout<<endl;
    for(int i=1;i<vec1.size();i++)
    {
        for(int j=0;j<i;j++)
        {
            if(vec1[i]>vec1[j] && dp[i]<(dp[j]+vec1[i]))
          {
            dp[i]=dp[j]+ vec1[i];
          }
        }
    }
    
    for(int i=0;i<dp.size();i++)
    {
         cout<<dp[i]<<" ";
    }
    cout<<endl;
    int maxval=0;
    for(int i=0;i<dp.size();i++)
    {
        maxval=max(maxval,dp[i]);
    }
    cout<<maxval<<endl;
    return 0;
}


