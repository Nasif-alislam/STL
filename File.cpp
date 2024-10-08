#include<iostream>
#include<fstream>//allow us to work with files
using namespace std;

int main(){
    string line;
    ofstream out_file("git", ios:: out | ios::app);

    if(!out_file){
        cout<<"Error opening file for writing!\n";
        return 1;
    }

    out_file<<"__________FILE__________\n";
    cout<<"Write something: "<<endl;
    getline(cin,line);
    out_file<<line<<endl;
    out_file.close();

    ifstream in_file("git"); 
    if(!in_file){
        cout<<"Error opening file for reading!\n";
        return 1;
    }
    string current_line;
    while(getline (in_file, current_line)){
        cout<<current_line<<endl;
    }

    in_file.close();

return 0;    
}