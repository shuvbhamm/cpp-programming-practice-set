#include <iostream>
using namespace std;
main(){
    int even=0,odd=0,a[5],i;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<5;i++){
        if(a[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    if(even>odd){
        cout<<"\nEven majority";
    }
    else{
        cout<<"\nOdd majority";
    }
}