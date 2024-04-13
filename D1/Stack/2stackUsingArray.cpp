#include <iostream>
#include <stack>
using namespace std;

// link: https://www.naukri.com/code360/problems/two-stacks_983634?leftPanelTabValue=PROBLEM

class Stack
{
    int back;
    int front;
    int *arr;
    int size;
public:
    Stack(int n)
    {
        size = n;
        arr = new int[size];
        front = -1;
        back = size;
    }
    int isFull()
    {
        if (back - front == -1)
            return 1;
        else
            return 0;
    }
    void push1(int x)
    {
        if (isFull() == 0)
        {
            front++;
            arr[front] = x;
        }
    }
    void push2(int x)
    {
        if (isFull() == 0)
        {
            back--;
            arr[back] = x;
        }
    }
    int pop1()
    {
        int x = arr[front];
        front--;
        return x;
    }
    int pop2()
    {
        int x = arr[back];
        back++;
        return x;
    }
    int top1()
    {
        if (front != -1)
        {
            return arr[front];
        }
    }
    int top2()
    {
        if (back != size)
        {
            return arr[back];
        }
    }
};

int main()
{
    Stack s1(6);
    Stack s2(6);
    s1.push1(10);
    s1.push1(100);
    s1.push1(110);
    s2.push2(30);
    s2.push2(40);
    s2.push2(50);
    cout << s1.pop1() << endl;
    cout << s2.pop2() << endl;
    cout << s1.top1() << endl;
    cout << s2.top2() << endl;
    return 0;
}