#include<iostream>
using namespace std;
 int add(int arr[], int n){

int sum =0;
for(int i=0;i<n; i++){
    sum=sum+arr[i];
}
return sum;
 }

int main (){
 int size;
 cin>>size;


    int arr[100];

for(int i=0;i<size;i++){

cin>>arr[i];
}

    int result=add(arr,size);

    cout<<"sum of arry is "<<result;

   return 0;

}