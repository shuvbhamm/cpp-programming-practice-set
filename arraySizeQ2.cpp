#include <iostream>
using namespace std;
main(){
    int size,i,check,rev=0;
    cout<<"enter size of array : ";
    cin>>size;
    int a[size];
    for(i=0;i<size;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    for(i=0;i<size;i++){
        check=a[i];
        while(a[i]!=0){
            int b=a[i]%10;
            rev=rev*10+b;
            a[i]=a[i]/10;
        }
        if(rev==check){
            cout<<rev<<" is palindrome\n";
        }
        rev=0;
    }
}