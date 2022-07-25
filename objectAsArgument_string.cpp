#include <iostream>
using namespace std;
class Data{
    private:
        string a;
    public:
        void input(){
            cout<<"enter string : ";
            cin>>a;
        }
        void addStr(Data d2){
            cout<<"after adding string : "<<a+" "+d2.a<<endl;
        }
        void commonLetter(Data d2){
            cout<<"\n---------common letter in string----------\n";
            for(int i=0;i<a.length();i++){
                for(int j=0;j<d2.a.length();j++){
                    if(a[i]==d2.a[j]){
                        cout<<a[i];
                    }
                }
            }
        }
};
main(){
    Data d1,d2;
    d1.input();
    d2.input();
    d1.addStr(d2);
    d1.commonLetter(d2);
}