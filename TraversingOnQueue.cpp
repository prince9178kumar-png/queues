#include <iostream>
#include <queue>
using namespace std;
void print(queue<int>& q){
    int n =q.size();
    while(n--){
        cout<<q.front()<<" ";
        q.push(q.front());
        q.pop();
    }
    cout<<endl;
}
int main(){
    queue <int>q;
    q.push(200);
    q.push(400);
    q.push(600);
    q.push(800);
    q.push(345);
    print(q);

}