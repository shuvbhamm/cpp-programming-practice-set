// if vowels are more then int exception
// if consonants are more then float exception
// and if both are equal then char exception
#include <iostream>
using namespace std;
main(){
    string name;
    int vowels=0,consonents=0;
    cout<<"enter string : ";
    cin>>name;
    for(int i=0;i<name.length();i++){
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u'|| name[i]=='A' || name[i]=='E' || name[i]=='I' || name[i]=='O' || name[i]=='U'){
            vowels++;
        }
        else{
            consonents++;
        }
    }
    
    //exception handling 
    try{
        if(vowels>consonents){
            throw 1;
        }
        if(consonents>vowels){
            throw 2.5f;
        }
        if(vowels==consonents){
            throw 'a';
        }
    }
    catch(int){
        cout<<"\nINT EXCEPTION | VOWELS MAJORITY ";
    }
    catch(float){
        cout<<"\nFLOAT EXCEPTION | CONSONANTS MAJORITY";
    }
    catch(char){
        cout<<"\nCHAR EXCEPTION | BOTH VOWELS AND CONSONANTS ARE EQUAL";
    }
}