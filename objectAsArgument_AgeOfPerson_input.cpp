#include <iostream>
using namespace std;
class person{
    private:
        int age;
        string name;
    public:
        void input(){
            cout<<"enter name : ";
            cin>>name;
            cout<<"\nenter age : ";
            cin>>age;
        }
        void compareAge(person p2,person p3){
            cout<<"\n-------OLDEST CITIZEN-------\n";
            
        }
};
main(){
    int n;
    cout<<"enter person : ";
    cin>>n;
    person p[n];
    for(int i=0;i<n;i++){
        p[i].input();
    }
}