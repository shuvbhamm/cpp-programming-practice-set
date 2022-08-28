#include <iostream>
#include <fstream>
using namespace std;
main(){
    ifstream fin;   //read
    ofstream fout;  //write

    char c;

    fin.open("alpha.txt");
    fout.open("beta.txt");

    while(1){
        c=fin.get();
        if(fin.eof()){
            break;
        }
        fout.put(c);
    }

    fin.close();
    fout.close();
}