#include <iostream>
#include <queue>
using namespace std;
 int main(){
    queue<int> q;
    q.push(2);//IN queue it add or push from the back side
     q.push(88);
      q.push(6);
      q.pop();//it remove or delete the number from front side
       q.push(7);
        q.push(8);
        cout<<q.size()<<endl;
        cout<<q.front()<<endl;
        cout<<q.back()<<endl;

 }