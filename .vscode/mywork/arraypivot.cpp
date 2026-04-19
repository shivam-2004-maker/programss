#include<iostream>
using namespace std;
int pivot (int arr[],int size){
    int s=0;
    int e = size-1;
    int mid =s+(e-s)/2;
    while(s<e){
        if(arr[mid]>=arr[0]){
            s = mid+1;

        }
          else
        {
            e=mid;
        }
      mid=s+(e-s)/2;

    }
    return e;

}

int main(){
    int arr[5]={3,8,1,10,17};
    cout<<" a pivot element  index = "<<pivot(arr,5)<<endl;

}