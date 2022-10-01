#include <iostream>
using namespace std;
void hello(int arr[]);
main(){
    int a[5]={1,2,3,4,5};
    cout<<"res : "<<hello(a);

}
int hello(int arr[]){
    return arr;
}