#include <iostream>
using namespace std;
main(){
    float interiorWall,exteriorWall,SurfaceAreaInterior,SurfaceAreaExterior,totalExt,InterCost,ExterCost;
    
    cout<<"Enter Number of Interior Wall : ";
    cin>>interiorWall;
    cout<<"Enter Number of Exterior Wall : ";
    cin>>exteriorWall;
    cout<<endl;

    for(int i=0;i<interiorWall;i++){
        if(interiorWall!=0){
            cout<<"Surface area of Interior Wall in sq ft : ";
            cin>>SurfaceAreaInterior;
            InterCost=InterCost+SurfaceAreaInterior;
        }
    }
    cout<<endl;
    InterCost=InterCost*18;

    for(int i=0;i<exteriorWall;i++){
        if(exteriorWall!=0){
            cout<<"Surface area of Exterior Wall in sq ft : ";
            cin>>SurfaceAreaExterior;
            ExterCost=ExterCost+SurfaceAreaExterior;
        }
    }
    ExterCost=ExterCost*12;
    
    cout<<"Total etimated cost : "<<InterCost+ExterCost<<" Rs";
}