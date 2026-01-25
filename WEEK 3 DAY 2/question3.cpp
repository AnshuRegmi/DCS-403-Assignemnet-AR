#include <iostream>
using namespace std;
int globalCount=0;
void showCounter(){
    int localCount =0;
    static int count = 0;
    globalCount++;
    localCount++;
    count++;
    cout<<"Global Count: "<<globalCount<<endl;
    cout<<"Local Count: "<<localCount<<endl;
    cout<<"Static Count: "<<count<<endl;

}
int main(){
    showCounter();
    showCounter();
    showCounter();
    return 0;
}