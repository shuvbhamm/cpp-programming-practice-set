#include <iostream>
using namespace std;
struct evenOdd{
    int n;
};
main(){
    evenOdd num;
    cout<<"enter any number : ";
    cin>>num.n;
    if(num.n%2==0){
        cout<<"\nEven";
    }
    else{
        cout<<"\nOdd";
    }
}