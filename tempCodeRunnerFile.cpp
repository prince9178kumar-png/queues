#include <iostream>
using namespace std;
class test{
    private:
    static int a, b;
    public:
    test(int a, int b){
        this->a = a;
        this->b=b;
    }
    static void sum(){
        b=a+b;
        cout<<"Sum = "<<b;

    }
};
int main(){
    test te(75,86);
    test::sum();
    return 0;
}