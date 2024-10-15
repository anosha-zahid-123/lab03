#include<iostream>
using namespace std;
int main(){
    bool ishot=true;
    bool issunny=false;
    cout<<"ishot AND issunny"<<(ishot && issunny)<<endl;
    cout <<"isHot OR isSunny"<<(ishot || issunny)<<endl;
    cout<<"not ishot"<<(!ishot)<<endl;
    cout<<"not issunny"<<(!issunny)<<endl;
    return 0;
}