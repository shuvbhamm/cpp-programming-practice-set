#include <iostream>
using namespace std;
class matrixClass{
    int a[3][3];
    public:
    void input(){
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<"enter number : ";
                cin>>a[i][j];
            }
        }
        cout<<"\n--------MATRIX-------\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[i][j]<<"\t";
            }
            cout<<"\n";
        }
    }
    void transpose(){
        cout<<"\n--------TRANSPOSE-------\n";
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cout<<a[j][i]<<"\t";
            }
            cout<<"\n";
        }   
    }
    void diagnolSum(){
        int sum1=0,sum2=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                if(i==j){
                    sum1+=a[i][j];  //for diagnol(\)
                }
                if(i+j==2){
                    sum2+=a[i][j];  //for diagnol(\)
                }
            }
        }
        cout<<"\nsum of diagnol (\\) = "<<sum1;
        cout<<"\nsum of diagnol (/) = "<<sum2;
    }
};
main(){
    matrixClass m1;
    m1.input();
    m1.transpose();
    m1.diagnolSum();
}