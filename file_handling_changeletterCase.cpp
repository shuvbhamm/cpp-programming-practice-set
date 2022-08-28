#include <iostream>
#include <fstream>
using namespace std;
main(){
    ifstream f;
    f.open("sample.txt");
    char c;
    while(1){
        c=f.get();
        if(f.eof()){
            break;
        }
        if(c>=65 && c<=90){
            c=c+32;
        }
        else if(c>=97 && c<=122){
            c=c-32;
        }
        cout<<c;
    }
    f.close();
}