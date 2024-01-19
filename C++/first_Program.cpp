#include <bits/stdc++.h>
using namespace std;
int main(){
    cout << "hi\n";
    float salary = 1234;
    cout << salary/3 << endl;
    char gender = 'm';
    bool val = true;
    int age = 18;
    double largeFloat = 123456.1;
    long largeInt = 123456;
    printf("%ld,%lf",largeInt,largeFloat);
    cout<< sizeof(long) <<endl;
    cout<< sizeof(double) <<endl;
    ostringstream os;
    os << largeFloat;
    string largeFloatStr = os.str();
    cout<< "float to str: "<< largeFloatStr << endl;
    cout<< "float to str: "<< to_string(largeFloat) << endl;
    cout<<typeid(largeFloatStr).name()<<endl;
    cout<< "max integer: "<<INT_MAX<<endl;

    // while loop....
    int no = 1234,digit = 0,last = 0;
    while (no>0){
        last = last*10+no%10;
        no/=10;
        digit++;
    }
    cout<< "reversed no for 1234: "<<last<<"\nNo. of digits: "<<digit<<endl;
    return 0;
}