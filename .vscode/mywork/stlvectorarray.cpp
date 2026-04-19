#include<iostream>
#include<vector>

using namespace std;
int main(){
vector<int>v;
//checking how many memory assing 

cout<<"checking the capicity "<<v.capacity()<<endl;
//pushig the value using the push_back function
v.push_back(1);
cout<<"cheaking the capcity "<<v.capacity()<<endl;
v.push_back(2);
cout<<"cheaking the capcity "<<v.capacity()<<endl;
v.push_back(3);
cout<<"cheaking the capcity "<<v.capacity()<<endl;

//checkiing the size 
cout<<"size is "<<v.size()<<endl;
//for pop and  deleting the last or back element 
//we using v.pop_back()function
v.pop_back();
for(int i:v){
    cout<<i<<endl;
     /*if we perform clear operstion then size of vector 
     become zero but the capacity of vector ramain same */
     v.clear();
     cout<<"size is "<<v.size()<<endl;

    
}


}