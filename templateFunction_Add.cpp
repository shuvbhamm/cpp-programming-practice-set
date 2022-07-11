#include <iostream>
using namespace std;
template <class flexible>       //flexible is just template name 
void add(flexible a,flexible b){
    flexible c;
    c=a+b;
    cout<<"Add : "<<c<<"\n";
}
main(){
    int a,b;
    cout<<"enter two number in integer : ";
    cin>>a>>b;
    add(a,b);

    float x,y;
    cout<<"enter two floating number : ";
    cin>>x>>y;
    add(x,y);

    char m,n;
    cout<<"enter two character : ";
    cin>>m>>n;
    add(m,n);
}