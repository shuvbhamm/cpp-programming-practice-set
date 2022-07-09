#include <iostream>
using namespace std;
struct swaP{
    int num1,num2;
};
main(){
    swaP s1;
    cout<<"enter 2 s1 : ";
    cin>>s1.num1>>s1.num2;
    cout<<"before swap : "<<s1.num1<<" "<<s1.num2;
    int temp=s1.num1;
    s1.num1=s1.num2;
    s1.num2=temp;
    cout<<"\nafter swap : "<<s1.num1<<" "<<s1.num2;
}