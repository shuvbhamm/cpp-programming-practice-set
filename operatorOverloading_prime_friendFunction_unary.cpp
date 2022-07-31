#include <iostream>
using namespace std;
class prime{
    private:
        int n;
    public:
        void input();
        void display();
        friend void operator++(prime &p);
};
void prime::input(){
    cout<<"enter any prime number : ";
    cin>>n;
}
void prime::display(){
    cout<<"\n------------Prime------------\n";
    cout<<n;
}
void operator++(prime &p){
    int count=0;
    while(1){
        p.n++;
        count=0;
        for(int i=1;i<=p.n/2;i++){
            if(p.n%i==0){
                count++;
            }
        }
        if(count==1){
            break;
        }
    }
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
    ++p;
    p.display();
}