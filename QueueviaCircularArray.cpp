#include <iostream>
#include <vector>
using namespace std;
class Queue{
    private:
    int length;
    int f;
    int r;
    vector <int> arr;
    public:
    Queue(int capacity){
        f=0;
        r = 0;
        length = 0;
        arr.resize(capacity,0);

    }
    void push(int val){
         if(length==arr.size()){
        cout<<"Queue is Full"<<" "<<endl;
        return;
    }
    if(r==arr.size()) r=0;
        arr[r++]=val;
        length++;

    }
void pop(){
    if(length==0){
        cout<<"Queue is empty";
        return;
    }
    if(f==arr.size()) f=0;
    f++;
length--;
}

int front(){
     if(length==0){
        cout<<"Queue is empty";
        return -1;
    }
return arr[f];
}

int size(){
return length;
}
int capacity(){
return arr.size();
}
void display(){
if(length == 0) return ; 
if(r<=f){
    for(int i =f;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    for(int i =0;i<r;i++){
        cout<<arr[i]<<" ";
    }

}
else{
    for(int i =f;i<r;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
}

};
int main(){
Queue q(5);
q.push(10);
q.push(20);
q.push(30);
q.display();
q.pop();
q.push(40);
q.push(50);
q.display();
q.pop();
q.push(60);
q.push(70);
q.display();
}