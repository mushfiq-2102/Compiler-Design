#include <iostream>
#include <fstream>
#include <string>
using namespace std;

bool isDataType(string w) {
    string dt[5] = {"int","float","double","char","string"};
    for(int i=0;i<5;i++){
        if(w == dt[i]) return true;
    }
    return false;
}

bool isControl(string w) {
    string ck[5] = {"if","else","for","while","return"};
    for(int i=0;i<5;i++){
        if(w == ck[i]) return true;
    }
    return false;
}

bool isPunc(char c) {
    string p = ";,(){}[]=+-*/'";
    if(p.find(c) != -1) return true;
    return false;
}

int main() {

    ifstream fp("Token.txt");
    if(!fp){
        cout << "File not found!" << endl;
        return 0;
    }

    string t;
    while(fp >> t){
        
        if(isDataType(t)){
            cout << t << " = Data Type Keyword" << endl;
        }
        else if(isControl(t)){
            cout << t << " = Control Keyword" << endl;
        }
        else if(t.size()==1 && isPunc(t[0])){
            cout << t << " = Punctuation" << endl;
        }
        else if(isdigit(t[0])){
            cout << t << " = Number" << endl;
        }
        else {
            cout << t << " = Identifier" << endl;
        }
    }

    fp.close();
    return 0;
}
