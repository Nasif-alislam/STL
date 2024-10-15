#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> cars = {"Toyota", "BMW", "GTR", "Proton"};

    cars.push_back("Speed");
    cars.push_back("Mitsubishi");

    cout<<"Enter: "<<endl;
    int n;
    cin>>n;
    for(int i=1; i<=n; i++){
        string s;
        cin>>s;
        cars.push_back(s);
    }

    for(auto itr: cars){
        cout<<itr<<endl;
    }

    if(cars.empty()==1){
        cout<<"empty!"<<endl;
    }
    else cout<<"Size: "<<cars.size()<<endl;


    //iterator
    vector<string> :: iterator itr;
    for(itr=cars.begin(); itr!=cars.end(); itr++){
        cout<<'\t'<<*itr<<endl;
    }


    //reverse iterator
    cout<<"showing in reverse!"<<endl;
    vector<string> :: reverse_iterator it;
    for(it=cars.rbegin(); it!=cars.rend(); it++){
        cout<<'\t'<<*it<<endl;
    }
return 0;
}