#include <iostream>
#include <fstream>
using namespace std;
main(){
    int choice;
    string userID,pswd;

    cout<<"---------HOTEL MANAGEMENT--------"<<endl
        <<"Press 1 for Owner"<<endl
        <<"Press 2 for Customer"<<endl
        <<"\nEnter your Choice : ";
    cin>>choice;

    if(choice==1){
        cout<<"Enter UserName : ";
        cin>>userID;
        cout<<"Enter Password : ";
        cin>>pswd;

        if(userID=="SeedIT" && pswd=="air3636"){

            cout<<"----------Welcome----------"<<endl
                <<"1 : New Booking"<<endl
                <<"2 : Check Room Number"<<endl
                <<"3 : Tarrif"<<endl
                <<"4 : CheckOut"<<endl
                <<"\nEnter Choice : ";
            cin>>choice;
            
            if(choice==1){
                ofstream fout;

                string name,address;
                long long int mobile;

                fout.open("Hotel.txt",ios::app);

                cout<<"--------New Booking--------"<<endl
                    <<"";
            }
        }
    }
}