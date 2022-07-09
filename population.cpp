#include <iostream>
using namespace std;
int main(){
	
	int population,tm,tme,tu,tf,tmu,tfe,tfu,te;
	cout<<"enter population : ";
	cin>>population;
	tm=population*52/100;
	te=population*58/100;
	tme=te*53/100;
	
	//calculation 
	tu=population-te;
	tf=population-tm;
	tmu=tm-tme;
	tfe=te-tme;
	tfu=tf-tfe;
	cout<<"\n\npopulation : "<<population<<"\ntotal male : "<<tm<<"\ntotal educated : "<<te<<"\ntotal male educated : "<<tme<<"\n";
	cout<<"\n\ntotal unedu : "<<tu<<"\ntotal female : "<<tf<<"\ntotal male unedu : "<<tmu<<"\ntotal female educated : "<<tfe<<"\ntotal female uneducated : "<<tfu;
	return 0;
}
