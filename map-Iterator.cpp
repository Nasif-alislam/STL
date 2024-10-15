#include<iostream>
#include<map>
using namespace std;

int main(){
    map<string, int> sectionmap;
    sectionmap["a"]=40;
    sectionmap["b"]=43;
    sectionmap["c"]=30;
    sectionmap["d"]=50;

    //range-based
    for(auto x:sectionmap){
        cout<<'\t'<<x.first<<" = "<<x.second<<endl;
    }

    //iterator-based
    map<string,int> :: const_iterator itr;
    for(itr = sectionmap.begin(); itr!=sectionmap.end(); itr++){
        cout<<'\t'<<(*itr).first<<" = "<<itr->second<<endl;
    }
return 0;
}