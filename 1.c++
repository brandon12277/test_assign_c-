#include <iostream>
using namespace std;

class Singleton {
private:
    
    string data;
    Singleton() {
       
        std::cout << "Singleton instance created." << std::endl;
    }

  
    Singleton(const Singleton&) {}
    Singleton& operator=(const Singleton&) { return *this; }

public:
  
    static Singleton& getInstance() {
         static Singleton instance;
       
        return instance;
    }

  
    void setData() {
        data = "Data1";
    }

    string getData() {
        return data;
    }
};

int main() {
  

    
    Singleton& singletonInstance = Singleton::getInstance();
    singletonInstance.setData();
    Singleton& singletonInstance2 = Singleton::getInstance();
    cout<<singletonInstance2.getData()<<endl;


    

    return 0;
}
