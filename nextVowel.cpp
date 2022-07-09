#include <iostream>
using namespace std;
main(){
    char c;
    cout<<"Enter any character to print its next vowel :";
    cin>>c;
    if((c>=97&&c<=100)||(c>=65&&c<=68)){
        cout<<"E";
    }
    else if((c>=101&&c<=104)||(c>=69&&c<=72)){
        cout<<"I";
    }
    else if((c>=105&&c<=110)||(c>=73&&c<=78)){
        cout<<"O";
    }
    else if((c>=111&&c<=116)||(c>=79&&c<=84)){
        cout<<"U";
    }
    else if((c>=117&&c<=122)||(c>=85&&c<=90)){
        cout<<"A";
    }
    else{
        cout<<"Wrong input";
    }
}