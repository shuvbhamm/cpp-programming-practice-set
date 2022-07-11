// perfect number
// sum of digit
// prime number
#include <iostream>
using namespace std;
main(){
  int choice;
    string x;
    do{
      cout<<"1 : Perfect Number\n2 : Sum Of Digit\n3 : Prime Number\n\nEnter your choice : ";
      cin>>choice;

      if(choice==1){
        int n,sum=0;
        cout<<"enter number to check perfect number : ";
        cin>>n;
        for(int i=1;i<=(n/2);i++){
            if(n%i==0){
                //sum of divisor should equals to original number EX: 28
                sum=sum+i;
            }
        }
        if(sum==n){
            cout<<n<<" is a perfect number";
        }
        else{
            cout<<"NOT a perfect number";
        }
      }

      if(choice==2){
        int n,sum=0;
        cout<<"enter any number :";
        cin>>n;
        while(n!=0){
          int d=n%10;
          n=n/10;
          sum=sum+d;
        }
        cout<<"sum of digit : "<<sum;
      }
      if(choice==3){
        int n,cnt=0;
        cout<<"enter any num : ";
        cin>>n;
        for(int i=1;i<=n/2;i++){
          if(n%i==0){
            cnt++;
          }
        }
        if(cnt==1){
          cout<<n<<" is prime";
        }
        else{
          cout<<n<<" is not prime";
        }
      }
      cout<<"\n\nEnter y to CONTINUE and n to EXIT\n";
      cin>>x;
    }while(x!="n");
}