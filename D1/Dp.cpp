#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <map>
using namespace std;

// Q1: The minimum cost of a path
// link:  https://www.geeksforgeeks.org/min-cost-path-dp-6/

#define R 4
#define C 4

// bottom-up approach using (recursion) Brute force

// int minCost(int cost[R][C],int m ,int n)
// {
//     if(m<0||n<0)
//       return INT_MAX;
//     else if(m==0 && n==0)
//       return cost[m][n];
//     else
//     {
//         int data=cost[m][n] + min(minCost(cost,m-1,n),minCost(cost,m,n-1));
//
//        return  data;
//
//     }
// }

// int main()
// {
//     int cost[R][C]={{1,2,3},
//                     {4,8,2},
//                     {1,1,3}};
//
//     int result=minCost(cost,2,2);
//    cout<<endl<<result;
//
//     return 0;
// }

// top-down approach using (recursion)

// int minCost(int cost[R][C],int m ,int n)
// {
//     if(m==R||n==C)
//       return INT_MAX;
//     else if(m==3 && n==3)
//       return cost[m][n];
//     else
//     {
//         int data=cost[m][n] + min(minCost(cost,m+1,n),minCost(cost,m,n+1));
//        return  data;
//     }
// }

// int main()
// {
//       int cost[R][C]={{9,4,9,9},
//                       {6,7,6,4},
//                       {8,3,3,7},
//                       {7,4,9,10}};
//     int result=minCost(cost,0,0);
//    cout<<endl<<result;
//     return 0;
// }


//count the step to reach the destination (extra) 
// diagonal is also applicable;


int mindata(int x, int y,int z)
{
    if(x<y)
      return (x<z)? x:z;
    else
      return (y<z)? y:z;
}

int minCost( int cost[R][C], int m, int n, int cnt)
{
  if (m == R || n == C)
    return INT_MAX;
  else if (m == 3 && n == 3)
  {
    //  cout<<cnt<<", ";
     return cnt;
  }
   
  else
  {
    int data = mindata(minCost( cost, m + 1, n+1, cnt + 1),minCost( cost, m + 1, n, cnt + 1), minCost( cost, m, n + 1, cnt + 1));
    return data;
  }
}
int main()
{
      int cost[R][C]={{9,4,9,9},
                      {6,7,6,4},
                      {8,3,3,7},
                      {1,7,1,10}};
  // int cost[R][C] = {{1, 2, 3},
  //                   {4, 8, 2},
  //                   {1, 1, 3}};

   int result=minCost(cost,0,0,0);                  
   cout << endl << result;

  return 0;
}
