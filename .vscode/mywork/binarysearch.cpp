#include<iostream>
using namespace std;
int binarysearch(int arr[],int size,int key){
    int start =0;
    int end =size-1;
   // int mid = (start+end)/2;
   int mid = start+(end-start)/2;
    while(mid<=end){
        if (arr[mid]==key){
            return mid;
        }
        if(arr[mid]>key){
            end=mid-1;
        }
        else{//arry[mid]<mid
            start=mid+1;  
        }
        //divided arry jo mila uske liye

       // mid=(start+end)/2;
       mid =start+(end-start)/2; 
    }
    return -1;
}
int main (){

int even[4] ={2,5,7,9};
int odd[5]={3,4,5,7,8};
int oddindex = binarysearch(odd,5,8);
cout<<oddindex<<"   your key index  "<<endl;
int evenindex = binarysearch(even,4,9);
cout<<"even array key address  "<<evenindex<<endl;
return 0;


}