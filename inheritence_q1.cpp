#include <iostream>
using namespace std;
class marks{
    protected:
        int m1,m2,m3;
    public:
        void input(){
            cout<<"enter m1 m2 m3 : ";
            cin>>m1>>m2>>m3;
        }
};
class sports:public marks{
    private:
        int sportsMarks;
    public:
        void input(){
            cout<<"enter sports marks : ";
            cin>>sportsMarks;
        }
        void total(){
            int tot;
            tot=m1+m2+m3+sportsMarks;
            cout<<"total : "<<tot<<endl;
        }
};
main(){
    sports s;
    s.marks::input();
    s.input();
    s.total();
}