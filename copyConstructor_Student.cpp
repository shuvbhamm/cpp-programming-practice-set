#include <iostream>
using namespace std;
class student{
    private:
        int roll;
        string name;
        int kaksha;
    public:
        student(){
            roll=0;
            name="N/A";
            kaksha=0;
        }
        student(int r,string n,int k){
            roll=r;
            name=n;
            kaksha=k;
        }
        student(student &obj){
            roll=obj.roll;
            name=obj.name;
            kaksha=obj.kaksha;
        }
        void display(){
            cout<<"roll : "<<roll<<endl;
            cout<<"name : "<<name<<endl;
            cout<<"kaksha : "<<kaksha<<endl;
            cout<<endl;
        }
};
main(){
    student s;
    student s1(101,"shubham",12);
    student s2(102,"pritish",10);
    student s3(103,"ashu",11);
    student s4(s1);

    s.display();
    s1.display();
    s2.display();
    s3.display();
    s4.display();
}