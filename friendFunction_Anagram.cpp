#include <iostream>
using namespace std;

class demo1 ;
class demo2 ;

class demo1{
    string x;
    public:
    void input(){
        cout<<"Enter first word : ";
        cin>>x;
    } 
    friend void anagram(demo1 d1,demo2 d2);
};
class demo2{
    string y;
    public:
    void input(){
        cout<<"Enter second word : ";
        cin>>y;
    } 
    friend void anagram(demo1 d1,demo2 d2);
};
void anagram(demo1 d1,demo2 d2)
{
    char c;
    for(int i=0;i<d1.x.length();i++){
        for(int j=i+1;j<d1.x.length();j++){
            if(d1.x[i]>d1.x[j]){
                c=d1.x[i];
                d1.x[i]=d1.x[j];
                d1.x[j]=c;
            } 
        }
    }
    for(int i=0;i<d2.y.length();i++){
        for(int j=i+1;j<d2.y.length();j++){
            if(d2.y[i]>d2.y[j]){
                c=d2.y[i];
                d2.y[i]=d2.y[j];
                d2.y[j]=c;
            }
        }
    }
    if(d1.x==d2.y){
        cout<<"\nAnagram";
    }
    else{
        cout<<"\nNot Anagram";
    }
}
main(){
    demo1 d1;
    demo2 d2;
    
    d1.input();
    d2.input();

    anagram(d1,d2);
}