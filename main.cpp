
#include <iostream>
#include <fstream>
#include <string>
#include <array>
#include <vector>
#include <list>
using namespace std;

void numberToWord(const string &str);

int main(int argc, char** argv) {
    string input;//string of integers
    cout << "Enter word" << endl;
    cin >> input;
    numberToWord(input);
    return 0;
}


void numberToWord(const string &str){
    int stringLength = str.length();
    list<array<char> > l;//Creates our list of arrays(char)
    array<char,4> arr;
    vector<string> possibleWords;//Push possible words into this vector
    ifstream inputFile;
    string fileName = "CutieHackDictionary.txt";
    inputFile.open(fileName);
    string temp; 
    string currentWord;
    
    //Create list of arrays
    for(int i = 0; i < stringLength; i++){//Going through our input(#)
        if(str[i] == '2'){
            arr[0] = 'A';
            arr[1] = 'B';
            arr[2] = 'C';
        }else if(str[i] == '3'){
            arr[0] = 'D';
            arr[1] = 'E';
            arr[2] = 'F';
        }else if(str[i] == '4'){
            arr[0] = 'G';
            arr[1] = 'H';
            arr[2] = 'I';
        }else if(str[i] == '5'){
            arr[0] = 'J';
            arr[1] = 'K';
            arr[2] = 'L';
        }else if(str[i] == '6'){
            arr[0] = 'M';
            arr[1] = 'N';
            arr[2] = 'O';
        }else if(str[i] == '7'){
            arr[0] = 'P';
            arr[1] = 'Q';
            arr[2] = 'R';
            arr[3] = 'S';
        }else if(str[i] == '8'){
            arr[0] = 'T';
            arr[1] = 'U';
            arr[2] = 'V';
        }else if(str[i] == '9'){
            arr[0] = 'W';
            arr[1] = 'X';
            arr[2] = 'Y';
            arr[3] = 'Z';
        }
        l.push_back(arr);
        //Empty the array
        fill(arr.begin(),arr.end(),0);
            
    }
    
    //We now have a list of arrays
    //Next we make our word combinations
    int i = 0;
    
    while(i < stringLength){
        
    }
    
    
    
    
    
   
    if(inputFile.is_open()){
        while(!inputFile.eof()){
            inputFile >> temp;
            //Compare temp with current word
            if(temp == currentWord)
                possibleWords.push_back(currentWord);
        }
    }else{
        cout << fileName << " was not opened!" << endl;
    }
    
    
    for(vector<string>::iterator it = possibleWords.begin(); it != possibleWords.end(); it++){
        cout << *it << endl;
    }
    
    
    inputFile.close();
}




/* CODE GRAVEYARD
 
    currentWord += q.front().top();
    q.push(q.front());
    q.pop();
    currentWord += q.front().top();
    q.push(q.front());
    q.pop();
    currentWord += q.front().top();
    q.push(q.front());
    q.pop();
 
 
 
 
 
 
 */