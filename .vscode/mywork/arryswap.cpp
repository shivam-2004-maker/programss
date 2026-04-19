#include<iostream>
using namespace std;
void printarray(int arr[],int size){

    for(int i=0; i<size; i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl;
}

void swap(int arr[],int size){
    for(int i=0; i<size; i+=2){
        if(i+1<size) {
            //swap(arr[i],arr[i+1]);     
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }
}
int main(){
    int arr[8]={3,2,7,9,5,6,8,10};
     int brr[5]={5,4,9,7,3};
     swap(arr,8);
printarray(arr,8);
   swap(brr,5);
printarray(brr,5);
    return 0;
}