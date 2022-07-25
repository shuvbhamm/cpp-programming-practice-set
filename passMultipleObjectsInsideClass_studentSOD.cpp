#include <iostream>     //SOD : Sum of Digit
using namespace std;
class student{
    private:
        int marks[5];
        string name;
    public:
        void input(){
            cout<<"enter name : ";
            cin>>name;
            for(int i=0;i<5;i++){
                cout<<"enter marks : ";
                cin>>marks[i];
            }
        }
        static void SOD(student *s,int n){
            
        }
};
main(){
    cout<<"enter number of students : ";
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        s[i].input();
    }
    student::SOD(s,n);
}