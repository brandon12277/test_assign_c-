#include <iostream>

using namespace std;

class Parent {
public:
    ~Parent() {
        cout << "Parent destructor called." << endl;
    }
};

class Child : public Parent {
public:
   
    ~Child() {
        cout << "Child destructor called." << endl;
        
        
    }
};

int main() {
   
    Child* childObj = new Child();
    
    delete childObj;
    return 0;
}