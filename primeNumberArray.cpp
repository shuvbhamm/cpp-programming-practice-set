#include <iostream>
using namespace std;
main(){
    int a[5],i,j,counter=0;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    cout<<"------------RESULT------------\n";
    for(i=0;i<5;i++){
        for(j=1;j<=a[i]/2;j++){
            if(a[i]%j==0){
                counter++;
            }
        }
        if(counter==1){
            cout<<a[i]<<" is prime number\n";
        }
        counter=0;
    }
}