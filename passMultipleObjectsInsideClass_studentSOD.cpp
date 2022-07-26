// wap to calculate sum of SOD of marks of student and print the name and sum of SOD of marks of that student
// for example : 
    // input : 11 22 33 44 55
    // sod of input : 1+1+2+2++3+3+4+4+5+5 = 30

#include <iostream>     //SOD : Sum of Digit
using namespace std;
class student{
    private:
        int marks[5];
        string name;
    public:
        void input(){
            cout<<"\nenter name : ";
            cin>>name;
            for(int i=0;i<5;i++){
                cout<<"enter marks : ";
                cin>>marks[i];
            }
        }
        static void SOD(student *s,int n){
            
            int sum[n]={0,0,0,0,0};
            for(int i=0;i<n;i++)
            {
                for(int j=0;j<5;j++)
                {
                    while(s[i].marks[j]!=0)
                    {
                        int temp=s[i].marks[j]%10;
                        sum[i]+=temp;
                        s[i].marks[j]/=10;
                    }
                }
            }
            int max=sum[0],location;
            for(int i=0;i<n;i++)
            {
                if(max<sum[i])
                {
                    max=sum[i];
                    location=i;
                }
            }
            cout<<"\n--------Result---------\n";
            cout<<"NAME : "<<s[location].name<<endl;
            cout<<"SOD : "<<sum[location]<<endl;    //SOD :sum of digit
        }
};
main(){
    cout<<"enter number of students : ";
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++)
    {
        s[i].input();
    }
    student::SOD(s,n);
}