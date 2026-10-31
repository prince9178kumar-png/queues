#include <iostream>
#include <stack>
#include <queue>
using namespace std;
void print(queue <long long>& q){
     int n= q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
     stack <int> st;
    while(q.size()!=0){
        q.pop();
        st.push(q.front());
    }
    while(st.size()!=0){
        q.push(st.top());
    st.pop();
    }
    int m= q.size();
    while(m--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;

}

int main(){
    queue <long long> q;
    q.push(2);
     q.push(4);
      q.push(6);
       q.push(8);
       print(q);


}