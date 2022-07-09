#include <iostream>
using namespace std;
main(){
    int a[10],search,max,min;
    for(int i=0;i<10;i++){
        cout<<"enter number : ";
        cin>>a[i];
    }
    cout<<"\nsearch number : ";
    cin>>search;
    for(int i=0;i<10;i++){
        if(search==a[i]){
            search=i;   //for location of searched number
        }
    }
    max=a[0];
    min=a[search+1];
    for(int i=0;i<search;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for(int i=search+1;i<10;i++){
        if(min>a[i]){
            min=a[i];
        }
    }
    cout<<"max in left : "<<max<<"\nmin in right : "<<min;
    cout<<"\nSum of max and min : "<<max+min;
}