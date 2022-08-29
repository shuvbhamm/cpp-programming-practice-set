// UserID       : Seed
// Password     : IT

#include <iostream>
#include <fstream>
using namespace std;
main(){
    string userID,password,name,branch;
    int choice,roll,sem;

    cout<<"1 for TEACHER \n2 for STUDENT\n";
    cout<<"Enter choice : ";
    cin>>choice;

    if(choice==1){
            login:
            cout<<"Enter User ID : ";
            cin>>userID;
            cout<<"Enter password : ";
            cin>>password;

            if(password=="IT" && userID=="Seed")
            {
                cout<<"------------Succesfully logged in----------"<<endl;
                cout<<"Enter 1 for adding question"<<endl
                    <<"Enter 2 for Pass Students"<<endl
                    <<"Enter 3 for Fail Students"<<endl
                    <<"Enter Choice : ";

                cin>>choice;

                if(choice==1){
                    ofstream fout;
                        fout.open("exam.txt",ios::app);
                        string ques,opt1,opt2,opt3,opt4,ans;
                        
                        cout<<"Enter Question : ";
                        cin>>ques;
                        cout<<"Enter 4 options : ";
                        cin>>opt1>>opt2>>opt3>>opt4;
                        cout<<"Enter Answer : ";
                        cin>>ans;

                        fout<<ques<<"\t\t\t"<<opt1<<"\t"<<opt2<<"\t"<<opt3<<"\t"<<opt4<<"\t"<<ans<<"\n";
                        fout.close();
                }
                else if(choice == 2){
                    int roll,score,sem;
                    string name,branch;
                    float percent;
                    cout<<"---------PASS STUDENTS--------"<<endl;
                    ifstream fin;
                    fin.open("studentScore.txt");
                    while(1){
                        fin>>roll>>name>>branch>>sem>>score>>percent;
                        if(fin.eof()){
                            break;
                        }
                        if(percent>=60){
                            cout<<"Name : "<<name<<endl
                                <<"Roll :"<<roll<<endl
                                <<"Branch and Sem : "<<branch<<" "<<sem<<endl
                                <<"Score : "<<score<<endl
                                <<"Percent : "<<percent<<"%"<<endl
                                <<"Result : Pass\n"<<endl;
                        }
                    }
                }
                else if(choice == 3){
                    cout<<"---------FAILED STUDENTS---------"<<endl;
                    int roll,score,sem;
                    string name,branch;
                    float percent;
                    ifstream fin;
                    fin.open("studentScore.txt");
                    while(1){
                        fin>>roll>>name>>branch>>sem>>score>>percent;
                        if(fin.eof()){
                            break;
                        }
                        if(percent<60){
                            cout<<"Name : "<<name<<endl
                                <<"Roll :"<<roll<<endl
                                <<"Branch and Sem : "<<branch<<" "<<sem<<endl
                                <<"Score : "<<score<<endl
                                <<"Percent : "<<percent<<"%"<<endl
                                <<"Result : FAIL\n"<<endl;
                        }
                    }
                }            
            }
            else{
                cout<<"\n--UserID and password doesnt match--"<<endl;
                goto login;
            }
    }

    else if(choice == 2){
        string ques,opt1,opt2,opt3,opt4,ans,yourAns;
        int quesAttempt=0,RightAns=0;
        float percent;
        cout<<"Student Login : "<<endl;
        cout<<"Enter Rollnum Name Branch Semester : ";
        cin>>roll>>name>>branch>>sem;
        
        ifstream fin;
        ofstream fout;

        fin.open("exam.txt");
        while(1){
            fin>>ques>>opt1>>opt2>>opt3>>opt4>>ans;
            if(fin.eof()){
                break;
            }
            cout<<"\n----------------------\n";
            cout<<"Q : "<<ques<<"\n"<<endl;
            cout<<"Options :"<<endl
                <<"a : "<<opt1<<endl
                <<"b : "<<opt2<<endl
                <<"c : "<<opt3<<endl
                <<"d : "<<opt4<<endl;

                cout<<"Your Answer(type answer) : ";
                cin>>yourAns;
                if(yourAns==ans){
                    RightAns++;
                }
                quesAttempt++;
        }
        cout<<"Result : "<<RightAns<<"/"<<quesAttempt;
        percent=(RightAns*100)/quesAttempt;
        fout.open("studentScore.txt",ios::app);
        fout<<roll<<"\t"<<name<<"\t"<<branch<<"\t"<<sem<<"\t"<<RightAns<<"\t"<<percent<<"\n";
        
        fin.close();
        fout.close();
    }
}