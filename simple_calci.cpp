#include<iostream>
using namespace std;
int main(){
    cout<<"Welcome to use your simple calculator\nEnter two numbers on which the calculation are to be made\n";
    double a,b,opr,again;
    cin>>a>>b;
    cout<<"which operation you need to do?\nPress the number of the required operation.\n1 - addition\n2 - subraction\n3 - multiplication\n4 - division\n";
    cin>>opr;
    if(opr == 1) cout<<a<<" + "<<b<<" = "<<(a+b)<<endl;
    if(opr == 2) cout<<a<<" - "<<b<<" = "<<(a-b)<<endl;
    if(opr == 3) cout<<a<<" * "<<b<<" = "<<(a*b)<<endl;
    if(opr == 4) cout<<a<<" / "<<b<<" = "<<(a/b)<<endl;
    cout<<"Thanks for using the calculator\nWould you mind using it again\nYes - 1\nNo - Press any key\n";
    cin>>again;
    if(again == 1)  main();
    return 0;
}