//Write your code here
#include <iostream>
#include <cstring> 
#include <string>
#include <fstream>
#include <cctype>
#include <vector>
using namespace std;

int main(){

    ifstream fin("name_score.txt");
    string s,rule;
    vector<string> a;
    vector<char> grade;
    char name[100],point[100];
    float na,nb,nc,nd;
    while(getline(fin,s)){
        a.push_back(s);
    }
    for(int i=0;i<a.size();i++){
        const char *c = a[i].c_str();
        char format[] = "%[^:]:&f,&f,&f";
        sscanf(c,format,name,&na,&nb,&nc);
        nd = na+nb+nc;
        a.at(i)=name;
        grade.push_back(nd >= 80 ? 'A': nd >= 70 ? 'B' : nd >= 60 ? 'C' : nd >= 50 ? 'D' : 'F');

    }
    string command;

    for(;;){

        cout << "Please input your command: ";
        getline(cin,command);
        rule = command.substr(0,5);
        if(rule == "name "){
            command = command.erase(0,5);


        }else if(rule == "grade"){
            command = command.erase(0,5);
            
        }else if(rule == "exit "){
            break;
        }

    }



}
