#include <iostream>
using namespace std;
class student{
    private:
        int roll;
        string name;
        float marks;
    public:
        void input(){
            cout<<"\nenter roll num : ";
            cin>>roll;
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter marks : ";
            cin>>marks;
        }
        static void sortMarks(student *s){
            for(int i=0;i<5;i++){
                for(int j=i+1;j<5;j++){
                    if(s[i].marks>s[j].marks){
                        
                        int temp = s[i].marks;
                        s[i].marks = s[j].marks;
                        s[j].marks = temp;

                        temp = s[i].roll;
                        s[i].roll = s[j].roll;
                        s[j].roll = temp;

                        string tempStr=s[i].name;
                        s[i].name=s[j].name;
                        s[j].name=tempStr;
                    }
                }
            }
            cout<<"\n\n---------Marks Sorted low to high---------";
            for(int i=0;i<5;i++){
                cout<<"\nname : "<<s[i].name<<endl;
                cout<<"roll : "<<s[i].roll<<endl;
                cout<<"marks : "<<s[i].marks<<endl;
            }
        }
};
main(){
    student s[5];
    for(int i=0;i<5;i++){
        s[i].input();
    }
    student::sortMarks(s);
}