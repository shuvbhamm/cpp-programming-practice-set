#include <iostream>
using namespace std;
main(){
    int a[5],i,rev=0,b,check;
    for(i=0;i<5;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    cout<<"----------RESULT----------\n";
    for(i=0;i<5;i++){
        check=a[i];
        while(a[i]!=0){
            b=a[i]%10;
            rev=rev*10+b;
            a[i]=a[i]/10;
        }
        if(check==rev){
            cout<<check<<" is palindrome\n";
        }
        rev=0;
    }
    cout<<"---------------------------";
}