#include <iostream>
using namespace std;
main()
{
    int a,b,c,choice;
    string x;
    do{
        cout<<"1 : Addition\n2 : Subtraction\n3 : Multiplication\n\nEnter your choice : ";
        cin>>choice;
        cout<<"enter two number : ";
        cin>>a>>b;
        if(choice==1){
            c=a+b;
            cout<<a<<" + "<<b<<" = "<<c;
        }
        if(choice==2){
            c=a-b;
            cout<<a<<" - "<<b<<" = "<<c;
        }
        if(choice==3){
            c=a*b;
            cout<<a<<" * "<<b<<" = "<<c;
        }
        cout<<"\n\nEnter y to CONTINUE and n to EXIT\n";
        cin>>x;
    }while(x!="n");
}