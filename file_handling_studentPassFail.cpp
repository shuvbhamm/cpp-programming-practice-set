#include <iostream>
#include <fstream>
using namespace std;
main(){
    ofstream fout;
    fout.open("StudentRecord.txt",ios::app);
    int roll,n;
    string name;
    float m1,m2,m3,m4,m5;
    cout<<"enter number of student for input : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<"enter roll number name and 5 subject's marks : ";
        cin>>roll>>name>>m1>>m2>>m3>>m4>>m5;

        fout<<roll<<"\t"<<name<<"\t"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5<<"\n";
    }
    fout.close();
    cout<<"\n---------------------------\n";
    ifstream fin;
    fin.open("StudentRecord.txt");
    while(1){
        fin>>roll>>name>>m1>>m2>>m3>>m4>>m5;
        if(fin.eof()){
            break;
        }
        if(m1>28 && m2>28 && m3>28 && m4>28 && m5>28){
            cout<<"Name : "<<name<<endl;
            cout<<"Result : PASS"<<endl;
        }
        else{
            cout<<"Name : "<<name<<endl;
            cout<<"Result : FAIL"<<endl;
        }
        cout<<"\n";
    }
    fin.close();
}