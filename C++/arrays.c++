#include<bits/stdc++.h>
using namespace std;
int main(){
    int nums[] = {2,1,-1,4};
    int len = sizeof(nums)/sizeof(nums[0]);
    sort(nums,nums+len);
    cout<<"After sorted for declared array\n";
    for(int i = 0;i<len;i++)
        cout<<nums[i]<<endl;

    fill(nums,nums+len,0);//for declared array..
    cout<<"nums Value refilled : "<<nums[2]<<" , "<< nums[3]<<"\n\nNow Inbuild array:\n";
    array<int,4> arr;
    fill(arr.begin(),arr.end(),-1);//for inbuild arr...
    cout<<"Printing array in a line"<<endl;
    copy(arr.begin(),arr.end(),ostream_iterator<int>(cout," "));//copy must use...for 1 line
    string names[3];
    for(int i=0;i<3;i++){
        cout<<"\ngive a word: ";
        cin>>names[i];
    }
    sort(begin(names),end(names));
    for(string str:names)
        cout<<str<<endl;
    string eg;
    getline(cin,eg);
    cout<<"give str_inputs and enter"<<endl;
    while(getline(cin,eg) and !eg.empty())
        cout<<eg<<endl;
    cout<<"give int_inputs and non_int for break"<<endl;
    int no;
    while(cin>>no)
        cout<<no<<endl;
     no = atoi("1234");
        cout<<"str to int: "<<no<<endl;
     eg = to_string(no);
        cout<<"int to str: "<<eg<<endl;
        reverse(eg.begin(),eg.end());
        cout<<"str_rev: "<<eg<<endl;
}