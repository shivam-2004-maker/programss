#include<iostream>
using namespace std;
int main (){
 int n;
 cin>>n;
 int  first =0 , second =1 ,next;
 


int i=1;
while(i<=n){
    cout<<first<<" ";
next=first+second;
first=second;
second=next;
i = i+1;

}
    


}
 
