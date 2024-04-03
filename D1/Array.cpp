#include <bits/stdc++.h>
#include <iostream>
#include <set>
#include <map>
using namespace std;

// Q1 Kth smallest element
// link : https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

//  apporach:Binary search

// int  count(vector<int>vect1,int mid){
//    int cnt=0;
//    for(int i=0;i<vect1.size();i++)
//    {
//     if(vect1[i]<=mid)
//       cnt++;
//    }
//    return cnt;

// }
// int ValueAtK(vector<int>vect1,int N,int k)
// {
//     int high=INT_MIN;
//     int low=INT_MAX;

//     for(int i=0;i<N;i++)
//     {
//         low=min(low,vect1[i]);
//         high=max(high,vect1[i]);
//     }
// int mid;
//     while(low<high)
//     {
//     mid=low +(high-low)/2;

//        if(count(vect1,mid)<k)
//           low=mid+1;
//        else
//          high=mid;
//     }
//     return low;

// }
// int main(){
//     int n,val,k;
//     cout<<"Enter the value of N  and K";
//     cin>>n>>k;
//     vector<int> vect1;
//     for(int i=0;i<n;i++)
//     {
//         cin>>val;
//         vect1.push_back(val);
//     }
//     cout<<endl;

//     int result= ValueAtK(vect1,n,k);

//   cout<<"value  of Kth smallest Number is: "<<result<<endl;
//     return 0;
// }

// Q2 Move all negative elements to end
// link : https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1

// int main()
// {
//     int n, val;
//     cout << "Enter the size of vector: ";
//     cin>>n;
//     vector<int> vect1;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> val;
//         vect1.push_back(val);
//     }
//     cout<<endl;
//         // Your code goes here
//      int i=0,j=1;
//      while(j<n)
//      {
//          if(vect1[i]<0 && vect1[j]>0)
//          {
//              int temp=vect1[i];
//              vect1[i]=vect1[j];
//              vect1[j]=temp;
//              i++;
//              j++;

//          }
//          else
//          {
//              j++;
//          }
//      }
//      for(int k=0;k<n;k++)
//      {
//         cout<<vect1[k]<<endl;
//      }
//      cout<<endl;

//      i=n-1;
//      j=n-2;

//      while(j!=0)
//      {
//         if(vect1[i]<0)
//         {
//             j--;
//             i--;
//         }

//         else if(vect1[j]<0 && vect1[i]>0)
//         {
//             int temp=vect1[i];
//              vect1[i]=vect1[j];
//              vect1[j]=temp;
//              i--;
//              j--;
//         }
//         else
//         {
//             j--;
//         }
//      }

//          for(int k=0;k<n;k++)
//      {
//         cout<<vect1[k]<<endl;
//      }
//      cout<<endl;

//     return 0;
// }

// Q3 Value equal to index value
// link: https://www.geeksforgeeks.org/problems/value-equal-to-index-value1330/1?page=1&sprint=94ade6723438d94ecf0c00c3937dad55&sortBy=submissions

// int main()
// {
//     int n,val;
//     vector<int> vect1;
//     cin>>n;
//     for(int i=0;i<n;i++)
//     {
//         cin>>val;
//         vect1.push_back(val);
//     }
//     // for(int i=1;i<=n;i++)
//     // {
//     //     // cin>>val;
//     //     // vect1.push_back(val);
//     //     cout<<vect1[i]<<endl;
//     // }

//     vector<int> result;
//     for(int i=0;i<n;i++)
//     {
//         if(vect1[i]==(i+1))
//         {
//             result.push_back(vect1[i]);
//         }
//     }
//     if(result.empty())
//     {
//         cout<<"Not found";
//     }
//     else
//     {
//         for(int i=0;i<result.size();i++)
//         {
//             cout<<result[i]<<endl;
//         }
//     }
//     return 0;
// }

// Q4 coding stdio contest qoestion?

// int main()
// {
//     int n,k;
//     n=52;
//     k=31;
//     string s="zhqizpdapofihhzbeihhfqjkmotstfqoboopmnckvbwpeoflrrbl";

//     if(k==1)
//     {
//      cout<<"true";
//      return 0;
//      }
//    int cnt=1;
//    for(int i=0;i<n;i++)
//    { cnt=1;
//       for(int j=i+1;j<n;j++)
//       {
//          if(s[i]==s[j])
//           cnt++;
//          else
//           continue;
//       }
//       if(cnt>=k)
//       {
//        cout<<cnt<<endl;
//        return 0;
//       }

//    }
//     return 0;
// }

// Q5 merge the intervals
//  link https://leetcode.com/problems/merge-intervals/

// int main()
// {
//     vector<vector<int>> intervals = {{1, 3}, {2, 6},{0,5} ,{8, 10}, {15, 18}};
//     // cout<<intervals[0][0];
//     int n=intervals.size();
//     vector<int> interval;
//     vector<vector<int>> result;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < intervals[i].size(); j++)
//     //     {
//     //         cout << intervals[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     sort(intervals.begin(),intervals.end());
//     // cout<<"After sorting "<<endl;
//     // for (int i = 0; i < n; i++)
//     // {
//     //     for (int j = 0; j < intervals[i].size(); j++)
//     //     {
//     //         cout << intervals[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     interval.push_back(intervals[0][0]);
//     interval.push_back(intervals[0][1]);

//     int j = 1;
//     while (j < n)
//     {
//         if (interval[1] >= intervals[j][0])
//         {
//             // cout<<"enter the matrix";
//             interval[0] = min(interval[0], intervals[j][0]);
//             interval[1] = max(interval[1], intervals[j][1]);
//             j++;
//         }
//         else
//         {
//             result.push_back(interval);
//             interval.clear();
//             interval.push_back(intervals[j][0]);
//             interval.push_back(intervals[j][1]);
//             j++;

//         }
//     }
//                result.push_back(interval);

//     // if(result.empty())
//     // {
//     //     cout<<"result is empty";
//     // }
//     // cout<<result.size();
//     int x=result.size();
//     int y;

//     for (int i = 0; i <x; i++)
//     {  y=result[i].size();
//         for (int j = 0; j <y ; j++)
//         {
//             cout << result[i][j] << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }

// Q6 merge two sorted array;
// link : https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

// int main()
// {

//     int arr1[10] = {12,42};
//     int arr2[10] = {3,4,5,28,37,42,43,46};
//     int n = 2, m = 8, low, high;
//      cout<<endl<<"before doing merging"<<endl;

//     cout<<"elements of arr1: ";
//     for (int i = 0; i < n; i++)
//     {
//          cout<< arr1[i] << " ";
//     }
//     cout << endl;
//     cout <<"elements of arr2: ";
//     for (int i = 0; i < m; i++)
//     {
//         cout<< arr2[i] << " ";
//     }

//     if (n > m)
//     {
//         high = n;
//         low = m;

//          int j = 0;
//         for (int i = low; i < (high + low); i++)
//         {
//             arr2[i] = arr1[j];
//             j++;
//         }
//         sort(arr2,arr2+(n+m));
//     cout<<endl<<"change in arr2"<<endl;

//         j=0;
//         for(int i=low;i<(high+low);i++)
//         {
//              // arr2[i]=-1;
//             arr1[j]=arr2[i];
//             j++;

//         }
//     }
//     else
//     {
//         high = m;
//         low = n;
//        int j = 0;
//         for (int i = low; i < (high + low); i++)
//         {
//             arr1[i] = arr2[j];
//             j++;
//         }
//         sort(arr1,arr1+(n+m));
//         cout<<endl<<"change in arr1"<<endl;

//         j=0;
//         for(int i=low;i<(n+m);i++)
//         {
//             arr2[j]=arr1[i];
//             j++;
//             // arr1[i]=-1;
//         }
//     }
//     cout<<endl<<"after doing merging"<<endl;

// cout <<"elements of arr1: ";
//     for (int i = 0; i < (n+m); i++)
//     {
//         cout<< arr1[i] << " ";
//     }
//     cout << endl;
//      cout <<"elements of arr2: "  ;
//     for (int i = 0; i < (n + m); i++)
//     {
//        cout<< arr2[i] << " ";
//     }
//     // cout<<arr.begin();
//     // arr1.clear();
//     cout<<endl<<"after doing merging and sorting"<<endl;

// cout <<"elements of arr1: " ;
//     for (int i = 0; i < n; i++)
//     {
//          cout<< arr1[i] << " ";
//     }
//     cout << endl;
//     cout <<"elements of arr2: ";
//     for (int i = 0; i < m; i++)
//     {
//         cout<< arr2[i] << " ";
//     }

//     return 0;
// }

// Q7 Longest consecutive subsequence
// link: https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

// int main()
// {
//     int arr[10]={0,1,1,1,1,2};
//     int N=6;
//     // for(int i=0;i<s1.size();i++)
//     // {
//     //     cout<<s1[i]<<" ";
//     // }

//      sort(arr,arr+N);
//       int result=0;
//       int cnt=1;
//       for(int i=0;i<(N-1);i++)
//       {

//           if((arr[i+1]-arr[i]==1))
//           {
//               cnt++;
//           }
//           else if((arr[i+1]-arr[i]==0))
//           {
//               continue;
//           }
//           else
//           {
//             result=max(result,cnt);
//             cnt=1;
//           }

//       }
//       result=max(result,cnt);
//       cout<<result<<" ";
//     return 0;
// }

// sliding window algorithm

// O(n*k) solution for finding maximum sum of
// a subarray of size k
// #include <bits/stdc++.h>
// using namespace std;

// // Returns maximum sum in a subarray of size k.
// int maxSum(int arr[], int n, int k)
// {
// 	// Initialize result
// 	int max_sum = INT_MIN;

// 	// Consider all blocks starting with i.
// 	for (int i = 0; i < n - k + 1; i++) {
// 		int current_sum = 0;
// 		for (int j = 0; j < k; j++)
// 			current_sum = current_sum + arr[i + j];

// 		// Update result if required.
// 		max_sum = max(current_sum, max_sum);
// 	}

// 	return max_sum;
// }

// // Driver code
// int main()
// {
// 	int arr[] = { 1, 4, 2, 10, 2, 3, 1, 0, 20 };
// 	int k = 4;
// 	int n = sizeof(arr) / sizeof(arr[0]);
// 	cout << maxSum(arr, n, k);
// 	return 0;
// }

// // This code is contributed by Aditya Kumar (adityakumar129)

// Q8  link https://leetcode.com/problems/minimum-size-subarray-sum/description/

// int main()
// {
//     int arr[10]={1,2,3,4,5};
//     // ar=[2,5,6,8,12,15];
//     // ar=[3,7,9,10,13,15];
//     int subarr[100];
//     int val=15;
//     subarr[0]=arr[0];
//     int index=INT_MAX;
//     for(int i=1;i<5;i++)
//     {
//         subarr[i]=subarr[i-1]+arr[i];
//         if(subarr[i]>=val)
//         {
//             index=min(index,i);
//         }

//     }

// index++;
//   cout<<index<<endl;
//     cout<<index<<endl;
//     for(int i=0;i<5;i++)
//     {
//         cout<<subarr[i]<<" ";
//     }
// int res;
// int high=-1;
//     for(int i=3;i>-1;i--)
//     {
//         res=subarr[4]-subarr[i];
//         if(res>=val)
//         {
//             high=i;
//             break;
//         }

//     }
//     // cout<<endl;
//     // cout<<high<<endl;
//     high=4-high;
//    cout<<endl;
//     cout<<high<<endl;
//     cout<<min(high,index)<<endl ;

//     return 0;
// }

// class Solution {
// public:
//     int minSubArrayLen(int target, vector<int>& nums) {
//        vector<int>presum;
//        presum.push_back(nums[0]);

//        int index=INT_MAX;
//        for(int i=1;i<nums.size();i++)
//        {
//            presum[i]=presum[i-1]+nums[i];
//            if(presum[i]>=target)
//            {
//                index=min(index,i);
//            }
//        }
//     //    cout<<presum.size()<<endl;
//        if(index==INT_MAX)
//        {
//            return 0;
//        }
//        index++;
//        int res,high;
//        for(int i=presum.size()-2;i>=0;i--)
//        {
//            res=presum[presum.size()-1]-presum[i];
//            if(res>=target)
//            {
//                high=i;
//                break;
//            }
//        }
//        high=(5)-high;
//        return min(high,index);
//     //  return -1;
//     }

// };

// Q9: Find the counts of elements of an unsorted integer array which are equal to the average of all elements of that array.
// Ex:
// Input Case 1:
// input: [2,2,2,2,2]
// output:  5
// solution : 2+ 2+ 2+ 2+ 2 = 10/5 ==> 2
// it contain five 2 element

// Input Case 2:
// input: [ 1,3,2,4,5]
// output:  1
// solution : 1+ 3+ 2+ 4+ 5 = 15/5 ==> 3
// it contain one 3 element

// int main(){
//     int arr[100];
//     cout<<"Enter the size of array: ";
//     int n;
//     cin>>n;
//     cout<<endl<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++)
//     {
//     cin>>arr[i];
//     }
//     map<int,int> mp1;
//      int avg=0;
//     for(int i=0;i<n;i++)
//     {
//         avg+=arr[i];
//         mp1[arr[i]]+=1;
//     }

// //   for(auto it:mp1)
// //   {
// //     cout<<"Count of "<<it.first<<" is: "<<it.second<<endl;
// //   }
// //   cout<<avg/n;
//     int val=-1;
//     val=avg/n;

//    if(val!=-1)
//     cout<<mp1[val];
//     else
//       cout<<"Not present in the array";
//     return 0;
// }

// Q10: Find the average of largest and smallest numbers in an unsorted integer array?
// Eg.
// Input Case 1:
// input: [1, 4, 3, 2]
// output:  2.5
// solution : average = (1+4)/2 =>5/2 => 2.5

// input: [1, 4, 3, 4]
// output:  3
// solution : average = (1+4 +4)/3 =>9/3 => 3

// int main(){
//     int arr[100];
//     cout<<"Enter the size of array: ";
//     int n;
//     cin>>n;
//     cout<<endl<<"Enter the elements of array: ";
//     for(int i=0;i<n;i++)
//     {
//     cin>>arr[i];
//     }
//     map<int,int> mp1;
//    int high=INT_MIN;
//    int low=INT_MAX;
//     for(int i=0;i<n;i++)
//     {
//         high=max(high,arr[i]);
//         low=min(low,arr[i]);
//         mp1[arr[i]]+=1;
//     }
//     int cnt=mp1[low]+mp1[high];
//     double avg = static_cast<double>((low*mp1[low])+(high*mp1[high]))/cnt;
//     cout<<avg;

//       return 0;
// }

// Q11 Common elements
//   link:https://www.geeksforgeeks.org/problems/common-elements1132/1

// int main()
// {
//     // vector<int> arr1 = {1,5,7,10,25,30};
//     // vector<int> arr2 = {5,15,25};
//     // vector<int> arr3 = {2,4,5,10,15,25,30};
//     vector<int> A = {1,5,10,20,40,80};
//     vector<int> B = {6,7,20,80,100};
//     vector<int> C = {3,4,15,20,30,70,80,120};

//     int i=A.size()-1;
//             int j=B.size()-1;
//             int k=C.size()-1;
//             set<int> res;

//             while(i>-1)
//             {
//                 if(j<0 || k<0)
//                 {
//                     break;
//                 }
//                 if(A[i]==B[j] )
//                 {
//                     if(A[i]==C[k])
//                     {
//                      if(res.find(A[i])==res.end())
//                          res.insert(A[i]);
//                      i--;
//                      j--;
//                      k--;
//                     }
//                     else if(A[i]<C[k])
//                     {
//                       k--;
//                     }
//                     else
//                     {
//                         i--;
//                     }
//                 }
//                 else if(A[i]<B[j])
//                 {
//                     j--;
//                 }
//                 else if(A[i]>B[j])
//                 {
//                     i--;
//                 }

//             }
//             vector<int> ans;
//             for(auto it:res)
//             {
//                 ans.push_back(it);
//             }
//             // cout<<"bs yaha tak"

//            for(int i=0;i<ans.size();i++)
//            {
//             cout<<ans[i]<<endl;
//            }

//     // for (int i = 0; i < arr.size(); i++)
//     // {
//     //     cout << arr[i];
//     // }
//     return 0;
// }



