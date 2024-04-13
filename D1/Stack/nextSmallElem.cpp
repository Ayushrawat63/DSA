#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 1, 4, 3};
    int n = arr.size();
    stack<int> st;
    st.push(-1);
    vector<int> result(n);

    for (int i = n - 1; i != -1; i--)
    {
        if (st.top() == -1)
        {
            result[i] = -1;
            st.push(arr[i]);
        }
        else
        {
            while (st.top() != -1)
            {

                if (arr[i] > st.top())
                {
                    result[i] = st.top();
                    st.pop();
                    st.push(arr[i]);
                }
                else
                {
                    st.pop();
                }
            }
        }
    }

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
}