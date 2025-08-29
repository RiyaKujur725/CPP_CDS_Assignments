#include<iostream>
using namespace std;

class construct{
    int a,b;
    public:
    construct(int m,int n)
    {
        a=m;
        b=n;
    }
    void inputdata(){
        cout<<"a="<<a<<endl<<"b="<<b;
    }
};
int main() {
    construct obj(10, 20);
    obj.inputdata();
    return 0;
}
