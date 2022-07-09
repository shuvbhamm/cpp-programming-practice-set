#include <iostream>
using namespace std;
struct student{
    int rollNum;
    string name;
    float m1,m2,m3;
};
main(){
    student s[5];
    for(int i=0;i<5;i++){
        cout<<"enter rollNo Name and Marks : ";
        cin>>s[i].rollNum>>s[i].name>>s[i].m1>>s[i].m2>>s[i].m3;
    }
    cout<<"\n----------------STUDENT DETAILS---------------\n";
    for(int i=0;i<5;i++){
        cout<<"ROLLNO : "<<s[i].rollNum;
        cout<<"\nNAME : "<<s[i].name;
        cout<<"\nMARKS : "<<s[i].m1<<" "<<s[i].m2<<" "<<s[i].m3<<"\n\n";
    }
}