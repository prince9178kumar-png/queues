//NOTE:- we can push and pop from both end , from front as well as back;//
#include <iostream>
#include <queue>
using namespace std;
void print(deque<int>& dq){
    int n =dq.size();
    while(n--){
        cout<<dq.front()<<" ";
        dq.push_back(dq.front());
        dq.pop_front();
    }
    cout<<endl;
}
int main(){
    deque<int> dq;
    dq.push_front(10);
     dq.push_front(20);
      dq.push_front(30);
       dq.push_front(40);
       print(dq);
}