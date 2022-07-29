#include <iostream>
using namespace std;
class prime{
    private:
        int n;
    public:
        void input();
        void operator++();
        void display();
};
void prime::input(){
    cout<<"enter any prime number : ";
    cin>>n;
}
void prime::operator++(){
    int flag=0,count=0;
    int temp=n;
    while(flag==0){
        temp++;
        count=0;
        for(int i=1;i<=(temp/2);i++){
            if(temp%i==0){
                count++;
            }
        }
        if(count==1){
            n=temp;
            flag=1;
        }
    }
}
void prime::display(){
    cout<<"\n---------Prime---------\n";
    cout<<n;
}
main(){
    prime p;
    p.input();

    p.display();
    ++p;
    p.display();
    ++p;
    p.display();
    ++p;
    p.display();
    ++p;
    p.display();

}