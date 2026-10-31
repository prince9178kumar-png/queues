#include <iostream>
#include <queue>
using namespace std;

void push(int idx, int ele, queue<int> &q)
{
    int n = q.size();
    for (int i = 1; i <=idx; i++)
    {
        q.push(q.front());
        q.pop();
    }
    q.push(ele);
    for (int i = 1; i <= n - idx; i++)
    {
        q.push(q.front());
        q.pop();
    }
}
void pop(int idx, queue<int> &q)
{
    int n = q.size();
    if (idx == 0 || idx >= n)
    {
        cout << "invalid index";
        return;
    }
    for (int i = 1; i < n; i++)
    {
        if (i != idx)
        {
            q.push(q.front());
        }
        q.pop();
    }
}
int get(int idx, queue<int> &q)
{
    int n = q.size();
    if (idx == 0 || idx < n)
    {
        cout << "QUEUE IS EMPTY";
        return -1;
    }
    for (int i = 1; i <= idx; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
        if (i == idx)
        {
            return x;
        }
    }
}
    void print(queue<int> & q)
    {
        int n = q.size();
        while (n--)
        {
            cout << q.front() << " ";
            q.push(q.front());
            q.pop();
        }
        cout << endl;
    }

int main()
{
    queue<int> q;
    q.push(200);
    q.push(400);
    q.push(600);
    q.push(800);
    q.push(345);
   // print(q); // 200 400 600 800 345
    // cout<<q.front()<<" ";
    // cout<<q.back()<<" ";
    //push(1, 50, q); // 200 50 600 800 345
    // pop(2,q);
     get(3,q);
   // print(q);
   //push(1,50,q);
  // print(q);
}