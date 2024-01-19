#include<bits/stdc++.h>
using namespace std;
int main(){
    unordered_map<int,string>Unorder = {{1,"Hi"},{3,"Hoo"},{2,"Hello"}};
    cout<<"Unordered map O(1)search best case"<<endl;
    for(auto pair:Unorder)
        cout<<pair.first<<":"<<pair.second<<endl;
    map<string,int>Dict;//ascending order automaticaly by key..
    Dict.insert(pair<string,int>("srikanth",0));//or use dic.emplace(.... , ...)
    for(int i=0;i<2;i++){
        string key;   
        cin>>key;
        Dict[key] = i+1;//value..
    }
    for(auto pair: Dict)
        cout<<pair.first<<" - "<<pair.second<<endl;
    if(Dict.find("srikanth")!=Dict.end())
        cout<<"srikanth key is present : "<<Dict["srikanth"]<<endl;
    cout<<"\nMap copied:\n"<<endl;
    map<string,int>newMap(Dict); //Map copy
    for(auto pair:newMap)
        cout<< pair.first<<" - "<<pair.second<<endl;
    multimap<int,string>Multimap;
    for(auto pair:Dict)
        Multimap.emplace(pair.second,pair.first);//or map.insert(make_pair(pair.sec,pai..fir))
    cout<<"\nSorted by values:\n"<<endl;
    for(auto pair:Multimap)
        cout<<pair.second<<" - "<<pair.first<<endl;
    if(Multimap.find(2)!=Multimap.end()){
        cout<<"Key found {2 : "<<Multimap.find(2)->second<<"} & Deleted 2nd key with val"<<endl;
        Multimap.erase(2);
        }
    cout<<"\nNew Map after del:"<<endl;
    for(auto pair:Multimap)
        cout<<pair.second<<" - "<<pair.first<<endl;
}