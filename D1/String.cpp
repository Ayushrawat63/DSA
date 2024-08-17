
#include <bits/stdc++.h>
#include<vector>
using namespace std;

// bool isSubsequence(string str1, string str2, int m, int n)
// {
// 	int j = 0;

// 	for (int i = 0; i < n && j < m; i++)

// 		if (str1[j] == str2[i])
// 			j++;
// 	return (j == m);
// }
// void findMinimumNumber(string s)
// {

// 	int r = stoi(s, 0, 2);

// 	int ans = r + 1;
// 	for (int i = 0; i <= r; i++) {

// 		string p = "";
// 		int j = i;
// 		while (j > 0) {
// 			p += to_string(j % 2);
// 			j = j / 2;
// 		}
//       cout<<p<<endl;

// 		int m = p.length();
// 		int n = s.length();
// 		reverse(p.begin(), p.end());

// 		if (!isSubsequence(p, s, m, n)) {

// 			ans = i;
// 			break;
// 		}
// 	}

// 	cout << ans;
// }


// int main()
// {

// 	string s = "10101";

// 	findMinimumNumber(s);

// 	return 0;
// }


// WAP to find the first non-repeating char in a string

// int main()
// { 
//    string s1="Hello";
//    vector<bool> vec(true,s1.length());
//      for(int i=0;i<vec.size();i++)
// 	 {
// 		cout<<vec[i]<<endl;
// 	 }

// 	return 0;
// }