#include<iostream>

using namespace std;

int sum(int arr[],int idx){

   
   if(idx == -1)return 0;

   return arr[idx] + sum(arr,idx-1);
   

}

int main(){

   int arr[] = {1,4,5};

   int length = sizeof(arr)/sizeof(arr[0]);

   cout<<"The sum is : "<<sum(arr,length-1)<<endl;


}