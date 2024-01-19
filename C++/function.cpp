#include<bits/stdc++.h>
using namespace std;

template<typename T> // Generic DataType..can use for all daytatypes..
void Swap(T& a, T& b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int a=10, b=2;
    cout<<"\n\nInitially A = "<<a<<" - " <<"B = "<<b;
    Swap(a, b);
    cout << "\nDefined Swap: A = " << a << " - B = " << b << endl;
    swap(a,b);
    cout<<"Inbuild swap: "<<a<<" - "<<b<<endl;
    srand(4);//Give the same random val...
    int randomNo = rand();
    cout<<"RandomNo: "<< randomNo<<endl;
    cout<<setw(13)<<"SRI"<<endl;//Allocates 13 chars..
    cout<<fixed<<setprecision(3)<<1234.576891<<endl;
}