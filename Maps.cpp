#include<iostream>
#include<map>
using namespace std;

int main(){
    //map<string, int,greater<int>> x = {{"a",19}, {"b",46}, {"c",26}, {"d",17}};
    map<string, int> x = {{"a",19}, {"b",46}, {"c",26}, {"d",17}};

    x.insert({"e",21});
    x.insert({"f", 39});

    x.erase("a");

    //changed
    x["b"]=49;

    //showing e
    cout<<x["e"]<<endl;

    //.at()
    cout<<x.at("c")<<endl;

    //empty(), size()
    if(x.empty()==1){
        cout<<"Empty!"<<endl;
    }
    else cout<<"size: "<<x.size()<<endl;

    for(auto y: x){
        cout<<y.first<<" is "<<y.second<<endl;
    }





return 0;
}