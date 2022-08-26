
//incomplete

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	vector <int> x;
    char y;
    stringstream p(str);
    while(p>>y){
        if(y==','){
            continue;
        }
        int temp = (int) y;
        x.push_back(temp);
    }
    return x;
}

int main() {
    string str;
    cin>>str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}