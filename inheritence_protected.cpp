/*
                Member function         Non Member Function         Inheritence

private             yes                     no                          no
public              yes                     yes                         yes
protected           yes                     no                          yes

*/

#include <iostream>
using namespace std;
class alpha{
    //if you want to inherit the private instance variable in the child or derived class then you have to make it protected.
    protected:
        int a=786;
    
};
class beta:public alpha{
    public:
        void display(){
            cout<<a;
        }
};
main(){
    beta obj;
    obj.display();
}