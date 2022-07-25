#include <iostream>
using namespace std;
class employee{
    private:
        int id;
        string name;
        string dep;
        long mobile;
        float salary;
    public:
        void input(){
            cout<<"enter name : ";
            cin>>name;
            cout<<"enter id and mobile : ";
            cin>>id>>mobile;
            cout<<"enter department : "<<dep;
            cin>>dep;
            cout<<"enter salary : ";
            cin>>salary;
            cout<<"\n";
        }
        static void empDetails(employee *e,int n){
            string k;
            int location,max=0;
            cout<<"enter department to search : ";
            cin>>k;
            for(int i=0;i<n;i++){
                if(k==e[i].dep){
                    if(max<e[i].salary){
                        max=e[i].salary;
                        location=i;
                    }
                }
            }
            cout<<"\n----------Employee Details(Highest salary in "<<k<<" )-----------\n";
            cout<<"name : "<<e[location].name<<endl;
            cout<<"id : "<<e[location].id<<endl;
            cout<<"dep : "<<e[location].dep<<endl;
            cout<<"mobile : "<<e[location].mobile<<endl;
            cout<<"salary : "<<e[location].salary<<endl;
        }
};
main(){
    int n;
    cout<<"enter number of employee : ";
    cin>>n;
    employee e[n];
    for(int i=0;i<n;i++){
        e[i].input();
    }
    employee::empDetails(e,n);
}