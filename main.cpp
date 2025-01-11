#include <cstdlib>
#include <iostream> 
#include <string>
#include <vector>
#include <fstream>
using namespace std; 

int main()
{
    int total = 0;
    string wordOfGame;
    vector<string> words;
    ifstream inputFile;
    inputFile.open("words.txt");
    string line;
    string userWord;
    srand(time(0));
    while (getline(inputFile, line)) words.push_back(line);
    wordOfGame = words[rand() % words.size()];
    cout << wordOfGame << endl;

    cin >> userWord; 
    while (userWord.length() != 5) 
    {
        cout << "Invalid input, try again." << endl;
        cin >> userWord; 
    }



    return 0;
} 