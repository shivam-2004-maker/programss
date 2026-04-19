#include<iostream>
using namespace std;



int  main(){
    int number [15];
cout<< "value at 3  " << number[3] <<endl;
    cout<<endl<<"everything is fine"<<endl;
    //second array 
    int second[7] = {4,5,6};
    cout<<"value at 1 is "<<second[1]<<endl;
//third array
int third[15] = {1,2,3,4};
int n =15;

for(int i = 0; i<n; i++){
    cout <<third[i]<<" ";

}
//forth array 
cout<<endl;
int fourth[14]={1};
    for(int i =0;i<14; i++) {
        cout<<fourth[i]<<" ";
    }




    return 0;

}