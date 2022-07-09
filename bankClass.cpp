#include <iostream>
using namespace std;
class bank{
    int accNum;
    string name;
    float bal;
    public:
    void input(){
        cout<<"Enter ACCOUNT NUMBER : ";
        cin>>accNum;
        cout<<"Enter Name : ";
        cin>>name;
        cout<<"Enter Balance : ";
        cin>>bal;
    }
    void deposit(){
        int amt;
        cout<<"\nEnter amount you want to deposit : ";
        cin>>amt;
        bal=bal+amt;
        cout<<"YOUR BALANCE :"<<bal;
    }
    void withdraw(){
        int amt;
        cout<<"\nEnter amount you want to withdraw : ";
        cin>>amt;
        if(bal-amt<1000){
            cout<<"Insufficient Balance\n";
        }
        else{
            bal=bal-amt;
        }
        cout<<"YOUR BALANCE :"<<bal;
    }
};
main(){
    bank mem1;
    mem1.input();
    mem1.deposit();
    mem1.withdraw();
    mem1.deposit();
    mem1.withdraw();
}