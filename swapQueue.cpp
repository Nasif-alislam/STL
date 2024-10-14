#include<iostream>
#include<queue>
using namespace std;

int main(){
queue<int> q1;
queue<int> q2;

//pushing elements in q1
q1.push(1);
q1.push(2);
q1.push(3);
q1.push(4);
q1.push(5);

//pushing elements in q2
q2.push(24);
q2.push(25);
q2.push(26);
q2.push(27);
q2.push(28);

//swapping queues
q1.swap(q2);

while(!q1.empty()){
    cout<<q1.front()<<endl;
    q1.pop();
}

while(!q2.empty()){
    cout<<q2.front()<<endl;
    q2.pop();
}
return 0;
}