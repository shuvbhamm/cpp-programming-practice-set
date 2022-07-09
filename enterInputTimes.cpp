#include <iostream>
using namespace std;
main(){
    int n,a,sum=0;
    cout<<"Enter how many numbers you want to add : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a;
        sum=sum+a;
    }
    cout<<"\nSum = "<<sum;
}