#include <cstdlib>
#include <iostream> 
#include <string>
#include <vector>
#include <fstream>
using namespace std; 

int main()
{
    int total = 0;
    vector<string> words;
    ifstream inputFile;
    inputFile.open("words.txt");
    string line;
    while (getline(inputFile, line)) words.push_back(line);

    cout << words[0] << endl;

    return 0;
} 