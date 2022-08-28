// WAP to copy content of aplpha.txt to beta.txt but change the case of letters(captial to small and small to capital)

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
        c=fin.get();        //get() function extract character by character from a string
        if(fin.eof()){
            break;
        }
        if(c>=65 && c<=90){
            c=c+32;
        }
        else if(c>=97 && c<=122){
            c=c-32;
        }
        fout.put(c);      
    }

    fin.close();
    fout.close();
}