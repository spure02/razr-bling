#include <iostream>
#include <fstream>
#include <string>
#include <stack>
#include <vector>
#include <array>
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
    char arr[4][stringLength];
    vector<string> possibleWords;//Push possible words into this vector
    ifstream inputFile;
    string fileName = "CutieHackDictionary.txt";
    inputFile.open(fileName);
    string temp; 
    string currentWord;
    
    //Create our 2-D Array
    for(int i = 0; i < stringLength; i++){
        for(int col = 0; col < 4; col++){
            if(str[i] == '2'){
                arr[0][col] = 'A';
                arr[1][col] = 'B';
                arr[2][col] = 'C';
                arr[3][col] = 0;
            }else if(str[i] == '3'){
                arr[0][col] = 'D';
                arr[1][col] = 'E';
                arr[2][col] = 'F';
                arr[3][col] = 0;
            }else if(str[i] == '4'){
                arr[0][col] = 'G';
                arr[1][col] = 'H';
                arr[2][col] = 'I';
                arr[3][col] = 0;
            }else if(str[i] == '5'){
                arr[0][col] = 'J';
                arr[1][col] = 'K';
                arr[2][col] = 'L';
                arr[3][col] = 0;
            }else if(str[i] == '6'){
                arr[0][col] = 'M';
                arr[1][col] = 'N';
                arr[2][col] = 'O';
                arr[3][col] = 0;
            }else if(str[i] == '7'){
                arr[0][col] = 'P';
                arr[1][col] = 'Q';
                arr[2][col] = 'R';
                arr[3][col] = 'S';
            }else if(str[i] == '8'){
                arr[0][col] = 'T';
                arr[1][col] = 'U';
                arr[2][col] = 'V';
                arr[3][col] = 0;
            }else if(str[i] == '9'){
                arr[0][col] = 'W';
                arr[1][col] = 'X';
                arr[2][col] = 'Y';
                arr[3][col] = 'Z';
            }
        }
    }
    
    //We now have of queue of stacks
    //Read through file and test all possible word combinations

    if(!inputFile.is_open()){
        cout << fileName << " was not opened!" << endl;
        return;
    }
    
    int counter[stringLength];
    int length[stringLength];
    
    for(int i = 0; i < stringLength; i++){
        if(str[i] == '7' || str[i] == '9'){
            length[i] = 4;
        }else{
            length[i] = 3;
        }
    }
    
    for(int i = 0; i < stringLength; i++)
        counter[i] = 0;
        
    int totalCombo = 1;
    
    for(int i = 0; i < stringLength; i++){
        totalCombo *= length[i];
    }
    
    cout << "Total Combo is " << totalCombo << endl;

    
    while(!inputFile.eof()){//For every word in the dictionary
        inputFile >> temp;
        //HARD PART.... Find combinations
        for(int i = 0; i < totalCombo; i++){//Get every possible combination
            for(int row = 0; row < 4; row++){
                for(int col = 0; col < stringLength; col++){
                    currentWord += arr[row][counter[col]];
                }
            }
            
            
            
            //Compare temp with current word   
            if(temp == currentWord){
                possibleWords.push_back(currentWord);
                break;
            }
//            cout << "CurrentWord = " << currentWord << endl;
            currentWord = "";
        }              
    }
    
    
    cout << "List of Possible Words:" << endl;
    for(vector<string>::iterator it = possibleWords.begin(); it != possibleWords.end(); it++){
        cout << *it << endl;
    }
    
  
    inputFile.close();
}




/* CODE GRAVEYARD
            for(int j = 0; j < stringLength; j++){
                currentWord += arr[j][counter[j]];
            }
            for(int k = stringLength - 1 ; k >= 0; k--){
                if(counter[k] + 1 < length[k]){
                    counter[k]++;
                    break;
                }
                counter[k] = 0;
            }
 
 
 */