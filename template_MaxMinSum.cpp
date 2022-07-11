#include <iostream>
using namespace std;
template <class flex>       //template <class template_name> is the syntax
class demo{
    flex a[5];              //change all the datatype you want to use as a template ,here flex is just a template name nothing else
    int max,min;
    public:
    void input(){
        for(int i=0;i<5;i++){
            cout<<"Enter number : ";
            cin>>a[i];
        }
    }
    void Max(){
        max=a[0];
        for(int i=0;i<5;i++){
            if(max<a[i]){
                max=a[i];
            }
        }
        cout<<"max : "<<max<<endl;
    }
    void Min(){
        min=a[0];
        for(int i=0;i<5;i++){
            if(min>a[i]){
                min=a[i];
            }
        }
        cout<<"min : "<<min<<endl;
    }
    void maxMinSum(){
        cout<<"SUM of MAX and MIN : "<<max+min<<endl;
    }
};
main(){
    demo <int> d1;      //declare the datatype you want to use as in object <datatype>
    d1.input();
    d1.Max();
    d1.Min();
    d1.maxMinSum();
    
    cout<<"\n";

    demo <float> d2;
    d2.input();
    d2.Max();
    d2.Min();
    d2.maxMinSum();
}