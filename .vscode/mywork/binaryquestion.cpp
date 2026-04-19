#include<iostream>
using namespace std;
int firstbinarysearch(int arr[],int size,int key){
    int start =0;
    int end =size-1;
   // int mid = (start+end)/2;
   int mid = start+(end-start)/2;
int ans = -1;
    while(mid<=end){
        if (arr[mid]==key){
        ans = mid;
        end=mid-1;
        }
        else if (key<arr[mid]){
        end=mid-1;
        }
        else if (key>arr[mid]){
        start=mid+1;
        }
       
        //divided arry jo mila uske liye

       // mid=(start+end)/2;
       mid =start+(end-start)/2; 
    }
    return ans;
}
int lastbinarysearch(int arr[],int size,int key){
    int start =0;
    int end =size-1;
   // int mid = (start+end)/2;
   int mid = start+(end-start)/2;
int ans = -1;
    while(mid<=end){
        if (arr[mid]==key){
        ans = mid;
          start=mid+1;
        }
        else if (key<arr[mid]){
        end=mid-1;
        }
        else if (key>arr[mid]){
        start=mid+1;
        }
        //divided arry jo mila uske liye

       // mid=(start+end)/2;
       mid =start+(end-start)/2; 
    }
    return ans;
}
int main (){

int even[8] ={2,5,5,5,5,5,7,9};


cout<<"first occrence is "<<firstbinarysearch(even,8,5)<<endl;
cout<<"last occrence is "<<lastbinarysearch(even,8,5)<<endl;
return 0;


}