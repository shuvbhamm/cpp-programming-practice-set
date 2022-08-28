#include <iostream>
#include <fstream>
using namespace std;
main(){
    ifstream fin;
    char c;
    int cnt;
    fin.open("sample.txt");
    while(1){
        c=fin.get();
        if(fin.eof()){
            break;
        }
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' ||c=='U'){
            cnt++;
        }
    }
    cout<<"Total vowels : "<<cnt;
    fin.close();
}