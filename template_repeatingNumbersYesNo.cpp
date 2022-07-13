#include <iostream>
using namespace std;

template<class flex>
class demo{
    private:
        flex a[3][3];   //flex is a template
    public:
        void input(){
            int count=0;
            for(int i=0;i<3;i++){
                for(int j=0;j<3;j++){
                    cout<<"enter number : ";
                    cin>>a[i][j];
                }
                cout<<"\n";
            }
            cout<<endl;
            for(int i=0;i<3;i++){
                count=0;
                for(int j=0;j<3;j++){
                    cout<<a[i][j]<<"\t";
                    for(int k=j-1;k>=0;k--){
                        if(a[i][j]==a[i][k]){
                            count++;
                        }
                    }
                }
                if(count>0){
                    cout<<"YES";
                }
                else{
                    cout<<"NO";
                }
                cout<<endl;
            }
        }
};
main(){
    demo <int> d1;  //decalring datatype of template as <int> 
    d1.input();
}