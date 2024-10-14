#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> a = {20,35,66,25,24,18};


    // after inserting new values
    a.insert(5);
    a.insert(7);
    a.insert(3);
    a.insert(1);

    // showing in decending order 
    set<int,greater<int>> b = {20,35,65,25,24,18,5,7,3,1};
    cout<<"decendiong order:"<<endl;
    for(int n : b){
        cout<<n<<" ";
    }

    //erasing 
    a.erase(3);
    a.erase(7);

    if(a.empty()==1){
        cout<<"Empty set!"<<endl;
    }
    else cout<<"size: "<<a.size()<<endl;

    //range base loop, where n is a veriable
    for(int n : a){
        cout<<n<<" ";
    }


return 0;
}