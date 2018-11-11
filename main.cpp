
#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include <queue>
using namespace std;

void numberToWord(const string &s);

int main(int argc, char** argv) {
    string input;//string of integers
    cout << "Enter word" << endl;
    cin >> input;
    numberToWord(input);
    
    
    return 0;
}


void numberToWord(const string &str){
    int stringLength = str.length();
    queue<stack<char> > q;//Creates our queue of stacks(char)
    stack<char> s;
    vector<string> possibleWords;//Push possible words into this vector
    ifstream inputFile;
    string fileName = "CutieHackDictionary.txt";
    inputFile.open(fileName);
    string temp; 
    
    //Create our queue of stacks
    for(int i = 0; i < stringLength; i++){//Going through our input(#)
        if(s[i] == '2'){
            s.push('C');
            s.push('B');
            s.push('A');
        }else if(s[i] == '3'){
            s.push('F');
            s.push('E');
            s.push('D');
        }else if(s[i] == '4'){
            s.push('I');
            s.push('H');
            s.push('G');
        }else if(s[i] == '5'){
            s.push('L');
            s.push('K');
            s.push('J');
        }else if(s[i] == '6'){
            s.push('O');
            s.push('N');
            s.push('M');
        }else if(s[i] == '7'){
            s.push('S');
            s.push('R');
            s.push('Q');
            s.push('P');
        }else if(s[i] == '8'){
            s.push('V');
            s.push('U');
            s.push('T');
        }else if(s[i] == '9'){
            s.push('Z');
            s.push('Y');
            s.push('X');
            s.push('W');
        }
        q.push(s);
        s.pop();
        s.pop();
        s.pop();
        if(s[i] == 7 || s[i] == 9)
            s.pop();
    }
    
    //We now have of queue of stacks
    //Make our word combinations
    
          
    
    
    
    
    
    
    if(inputFile.is_open()){
        while(!inputFile.eof()){
            inputFile >> temp;
            //Compare temp with current word
        }
    }else{
        cout << fileName << " was not opened!" << endl;
    }
    
    
    inputFile.close();
}