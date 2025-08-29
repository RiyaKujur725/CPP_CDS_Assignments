#include<iostream>
using namespace std;

int count = 0;

class destruct {
public:
    destruct() {
        count++;
        cout << "No of objects created: " << count << endl;
    }

    ~destruct() {
        count--;
        cout << "No of objects destroyed: " << count << endl;
    }
};

int main() {
    destruct obj1; 
    destruct obj2; 
    destruct obj3; 

    {
        destruct obj4;  
    } 

    return 0;
}
