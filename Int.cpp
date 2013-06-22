#include<iostream>

using namespace std;

int Int(double x){
    int local = x;
    return x;
}

int main(){

    cout<< Int(0.9) << "," << Int(-2.6) <<"," << Int(-347234.4576)<<","
    <<Int(1.9) <<"," <<Int(1.00001)<<endl;
    return 0;
}
