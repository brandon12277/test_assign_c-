#include<iostream>

using namespace std;
class ClassY {
      public:
    int data;

    
    ClassY(int value) {
        data = value;
    }

   
    ~ClassY() {
        delete &data;
    }
};

class ClassX {
  

public:
    
    ClassY* objY;

    
    ClassX(int valueY) {
        objY = new ClassY(valueY);
    }


    
    ClassX(const ClassX& other, bool deepCopy) {
        if (deepCopy) {
            objY = new ClassY(other.objY->data);
            cout<<"Deep Copy Created"<<endl;
        } else {
            cout<<"Shallow Copy Created"<<endl;
            objY = other.objY;
        }
        
    }

    
    ~ClassX() {
        delete objY;
    }
};

int main(){

    int num = 6;
   ClassX obj(num);

   cout<<"Creating Shallow copy...."<<endl;

   ClassX shallow_copy(obj,false);

   cout<<"Creating Deep copy...."<<endl;

   ClassX deep_copy(obj,true);

   cout<<"Shallow copy data : "<<shallow_copy.objY->data<<endl;
   cout<<"Deep copy data : "<<deep_copy.objY->data<<endl;




}
