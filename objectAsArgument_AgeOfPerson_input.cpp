// incomplete
#include <iostream>
using namespace std;
class person{
    private:
        int age;
        string name;
    public:
        void input(){
            cout<<"\nenter name : ";
            cin>>name;
            cout<<"enter age : ";
            cin>>age;
        }
        static void compareAge(person *p,int n){
            cout<<"\n-------OLDEST CITIZEN-------\n";
            int max=0,location=0;
            for(int i=0;i<n;i++){
                if(max<p[i].age){
                    max=p[i].age;
                    location=i;
                }
            }
            cout<<"name : "<<p[location].name<<endl;
            cout<<"age : "<<p[location].age;
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
    person::compareAge(p,n);
}