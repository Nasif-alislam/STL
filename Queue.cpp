#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    //direct input
    q.push("Nasif's");
    q.push("git");

    int n;
    cout<<"Enter the size of inputs:\n";
    cin>>n;

    //user input
    for(int i=1; i<=n; i++){
        string s;
        cin>>s;
        q.push(s);
    }

    //checking empty() and size()
    if(q.empty()){
        cout<<"The queue is empty!\n";
    }
    else cout<<"The size of the queue is: "<<q.size()<<endl;

    //display queue and remove elements from queue
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
return 0;
}