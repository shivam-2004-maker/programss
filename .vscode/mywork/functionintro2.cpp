#include<iostream>
using namespace std;

bool  iseven (int a) {
if(a&1){
    return 0;

}
else{
    return 1;
}
}

    
    


int main() {
    int a;

    cin>>a;
if(iseven(a))
{cout<<"it is even "<<endl;
} 
else
{cout<<"it is odd";}




}