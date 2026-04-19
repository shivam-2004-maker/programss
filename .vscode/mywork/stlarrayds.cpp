#include<iostream>
#include<array>

using namespace std;
int main(){
int basic[3]={1,2,3};
array<int,4> a ={1,2,3,4};

int size = a.size();
for(int i=0; i<size;i++){
    cout<<a[i]<<endl;

}
//for andom access we use at function 

cout<<"element at 2nd index = "<<a.at(2)<<endl;
 //for cheaking array is empty or not we use a.empty()
 cout<<"cheaking array is empty or not "<<a.empty()<<endl;
 //0 means false and 1 means true 
 cout<<"printing the fropnt elemnt of the array "<<a.front()<<endl;
 cout<<"printing the last element of the array "<<a.back()<<endl;




}