#include <iostream>
using namespace std;
class DATA{
    int a[3][3];
    static int count;
    public:
    void input(){
        int sum=0;
        cout<<"\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"Enter number : ";
                cin>>a[i][j];
            }
        }
        cout<<"\n";
        for(int i=0;i<3;i++){
            sum=0;
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<"\t";
                sum=sum+a[i][j];
            }
            if(sum%2==0){
                count++;
            }
            cout<<"\n";
        }
    }
    static void show(){
        cout<<"\nTotal Even ROW : "<<count;
    }
};
int DATA::count=0;
main(){
    DATA d1,d2,d3;
    d1.input();
    d2.input();
    d3.input();

    DATA::show();
}