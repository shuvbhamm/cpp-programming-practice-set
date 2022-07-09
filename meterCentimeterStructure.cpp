#include <iostream>
using namespace std;
struct Size{
    int m,cm;   //m : meter     cm : centimeter
};
main(){
    Size s1,s2,s3;

    cout<<"enter first measure : ";
    cin>>s1.m>>s1.cm;
    cout<<"enter second measure : ";
    cin>>s2.m>>s2.cm;

    s3.m = s1.m + s2.m;
    s3.cm = s1.cm + s2.cm;
    while(s3.cm>=100){
        s3.cm=s3.cm-100;
        s3.m++;
    }
    cout<<"\nfinal measurement : "<<s3.m<<"m "<<s3.cm<<"cm";
}