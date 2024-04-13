#include <iostream>
#include<stack>
using namespace std;

// link:https://www.naukri.com/code360/problems/stack-implementation-using-array_3210209?leftPanelTabValue=SUBMISSION

// stack using STL;


// int main()
// {
//     stack<int> s1;
//     cout<<s1.empty()<<endl;
//
//     s1.push(10);
//     s1.push(20);
//     s1.push(5);
//     s1.push(70);
//
//     cout<<s1.top()<<endl;
//     cout<<s1.size()<<endl;
//     s1.pop();
//     cout<<s1.top()<<endl;
//
//     cout<<s1.empty()<<endl;  
// }


//  stack using array

class Stack
{
    int size;
    int *arr;
    int top;

public:
    Stack(int n)
    {
        top = -1;
        size = n;
        arr = new int[size];
    }
    void push(int x)
    {
        top++;
        arr[top] = x;
    }
    int pop()
    {
        int x;
        x=arr[top];
        top--;
        return x;

    }
      string isEmpty()
     {
        if(top==-1)
         return "stack is empty.";
        else
           return "stack has  some elements.";
     }
    int Top()
    {
        return arr[top];
    }
};

int main()
{  
Stack s(100);
    s.push(6);
    s.push(7);
    cout<<s.Top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.Top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.isEmpty()<<endl;
    return 0;
}

