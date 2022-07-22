#include <iostream>
using namespace std;
class student{
    private:
        int roll;
        string name;
        float marks;
    public:
        void input(){
            cout<<"\nenter name : ";
            cin>>name;
            cout<<"enter roll : ";
            cin>>roll;
            cout<<"enter marks : ";
            cin>>marks;
        }
        static void maximum(student *s){
            int max=0,location=0;
            for(int i=0;i<5;i++){
                if(max<s[i].marks){
                    max=s[i].marks;
                    location=i;
                }
            }
            cout<<"\n--------topper--------\n";
            cout<<"Name : "<<s[location].name<<endl;
            cout<<"Roll : "<<s[location].roll<<endl;
            cout<<"Marks : "<<s[location].marks<<endl;
        }
};
main(){
    student s[5];
    for(int i=0;i<5;i++){
        s[i].input();
    }
    student::maximum(s);
}