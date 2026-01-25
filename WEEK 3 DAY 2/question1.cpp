#include <iostream>
using namespace std;
void increment (int num){
    num++;
    cout<<"Inside function: "<<num<<endl;

}
int main(){
    int number=5;
    cout<<"Before function call: "<<number<<endl;
    increment(number);
    cout<<"After function call: "<<number<<endl;
    return 0;
}