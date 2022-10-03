// username - shubham
// Password - air3636

#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

void Tarrif(){
    cout<<"--------TARRIF PLANS---------\n"<<endl
        <<"GENERAL - 1000 Rs per day"<<endl
        <<"JOINT - 2500 Rs per day"<<endl
        <<"DELUXE - 4000 Rs per day"<<endl
        <<"FULLDELUXE -5000 Rs per day\n"<<endl;
}
void Bill(string name,string address,long long int mobNum,int roomNumber,string roomType,int days,float bill){
    ofstream fout;("HotelBill.txt");
    fout.open("HotelBill.txt");
    fout<<"------HOTEL VRINDAVAN DURG----------\n"
        <<"---------------BILL-----------------\n"
        <<"NAME   : \t"<<name<<"\n"
        <<"ADDR   : \t"<<address<<"\n"
        <<"MOB    : \t"<<mobNum<<"\n"
        <<"RoomNo : \t"<<roomNumber<<"\n"
        <<"Room   : \t"<<roomType<<"\n"
        <<"Days   : \t"<<days<<" days\n"
        <<"Amount : \t"<<bill<<" INR \n"
        <<"\nThankyou\nHotel Vrindavan\nDurg CG";
    
    system("cls");
    cout<<"------HOTEL VRINDAVAN DURG----------\n"
        <<"---------------BILL-----------------\n"
        <<"NAME   : \t"<<name<<"\n"
        <<"ADDR   : \t"<<address<<"\n"
        <<"MOB    : \t"<<mobNum<<"\n"
        <<"RoomNo : \t"<<roomNumber<<"\n"
        <<"Room   : \t"<<roomType<<"\n"
        <<"Days   : \t"<<days<<" days\n"
        <<"Amount : \t"<<bill<<" INR \n"
        <<"\nThankyou\nHotel Vrindavan\nDurg CG";

    fout.close(); 
}
main(){
    int choice,roomNum[50];
    string userID,pswd;
    home:
    system("cls");  //used to clear terminal and comes with sdlib.h header file

    cout<<"---------HOTEL VRINDAVAN DURG--------\n"<<endl
        <<"Press 1 for Owner"<<endl
        <<"Press 2 for Customer"<<endl
        <<"\nEnter your Choice : ";
    cin>>choice;

    if(choice==1){
    	system("cls");
        login:
        cout<<"Enter UserName : ";
        cin>>userID;
        cout<<"Enter Password : ";
        cin>>pswd;

        if(userID=="shubham" && pswd=="air3636"){
            
            system("cls");

            cout<<"Succesfully Logged in\n"<<endl;
            owner:
            cout<<"----------Welcome----------"<<endl
                <<"1 : Check-In"<<endl
                <<"2 : Check Room Number"<<endl
                <<"3 : Tarrif Plans"<<endl
                <<"4 : Check-Out"<<endl
                <<"5 : EXIT"<<endl
                <<"\nEnter Choice : ";
            cin>>choice;
            
            if(choice==1)   //CHECK IN PAGE
            {
                ofstream fout;

                string name,address,roomType;
                long long int mobile;
                int days,roomNumber;
                float bill;

                system("cls");
                fout.open("Hotel.txt",ios::app);

                cout<<"--------CHECK IN--------"<<endl;
                
                cout<<"Enter Name : ";
                cin>>name;
                cout<<"Enter Address : ";
                cin>>address;
                cout<<"Enter mobile number : ";
                cin>>mobile;

                Tarrif();
                cout<<"Enter Room Type :";
                cin>>roomType;
                cout<<"Number of day(s) staying : ";
                cin>>days;

                if(roomType=="DELUXE"){
                    bill=days*4000;
                }
                if(roomType=="FULLDELUXE"){
                    bill=days*5000;
                }
                if(roomType=="GENERAL"){
                    bill=days*1000;
                }
                if(roomType=="JOINT"){
                    bill=days*2500;
                }
                
                for(int i=1;i<50;i++)
                {
                    if(roomNum[i]!=1){
                        roomNumber=i;
                        roomNum[i]=1;
                        break;
                    }
                }

                fout<<roomNumber<<"\t"<<name<<"\t"<<address<<"\t"<<mobile<<"\t"<<roomType<<"\t"<<days<<"\t"<<bill<<"\n";
                Bill(name,address,mobile,roomNumber,roomType,days,bill);
                fout.close();
                
                cout<<"\n\n";
                goto owner;
            }
            if(choice==5){
                goto home;
            }
        }
        else{
            cout<<"Wrong login credentials Try Again \n"<<endl;
            goto login;
        }
    }
}
