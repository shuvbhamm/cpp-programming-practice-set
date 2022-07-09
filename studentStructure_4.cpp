#include <iostream>
using namespace std;
struct student{
    int rollNum;
    string name;
    float marks;
};
main(){
    student s[5];
    int max,location=0;
    for(int i=0;i<5;i++){
        cout<<"enter rollNo Name and Marks : ";
        cin>>s[i].rollNum>>s[i].name>>s[i].marks;
    }
    max=s[0].marks;
    for(int i=0;i<5;i++){
        if(max<s[i].marks){
            max=s[i].marks;
            location = i;
        }
    }
    cout<<"\n----------------STUDENT DETAIL---------------\n";
    cout<<"ROLLNO : "<<s[location].rollNum;
    cout<<"\nNAME : "<<s[location].name;
    cout<<"\nMARKS : "<<s[location].marks<<"\n\n";
}