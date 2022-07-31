#include <iostream>
using namespace std;
class vowels{
    private:
        char c='A';
    public:
        void input();
        void display();
        friend void operator++(vowels &v);
};
void vowels::display(){
    cout<<"\n------Result-------\n";
    cout<<c;
}
void operator++(vowels &v){
    while(1){
        if(v.c=='A'){
            v.c='E';
            break;
        }
        if(v.c=='E'){
            v.c='I';
            break;
        }
        if(v.c=='I'){
            v.c='O';
            break;
        }
        if(v.c=='O'){
            v.c='U';
            break;
        }
        if(v.c=='U'){
            v.c='A';
            break;
        }
    }
}
main(){
    vowels v;

    v.display();
    ++v;
    v.display();
    ++v;
    v.display();
    ++v;
    v.display();
    ++v;
    v.display();
    ++v;
    v.display();
}