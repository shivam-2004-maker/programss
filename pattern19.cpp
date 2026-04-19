#include<iostream> 
using namespace std;
int main() {
    int n;
cin>>n;
int i= n;

while(i>=1){
    int j=1;
    while(j<=i){
        cout<<j;
        
        j=j+1;
        
    }
    int k =2*(n-i);
    while (k){
        cout<<"*";
        k=k-1;

    }
    //decrinsing numbers
    int m = i;
    while(m>=1){
        cout<<m;
        m=m-1;
    }

cout<<endl;
    i=i-1;
}

}