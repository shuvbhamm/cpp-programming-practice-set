#include <iostream>
using namespace std;
main(){
    int n,count=0;
    cout<<"enter number TO count even number between 1 and that number : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<"\n";
            count++;
        }
    }
    cout<<"\nEven Count = "<<count;
}