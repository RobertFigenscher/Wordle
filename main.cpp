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
    bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false;
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
    if (userWord[0] == wordOfGame[0])
        cout << "Same first letter!" << endl;
    else 
    {
        for (int i = 0; i <= 5; i++)
        {
            if (userWord[0] == wordOfGame[i])
               flag1 = true;
        }
        if (flag1)
            cout << "letter is in word" << endl;
        else 
            cout << "letter is not in word" << endl;
    } 
    if (userWord[1] == wordOfGame[1])
        cout << "Same second letter!" << endl;
    else 
    {
        for (int i = 0; i <= 5; i++)
        {
            if (userWord[1] == wordOfGame[i])
               flag2 = true;
        }
        if (flag2)
            cout << "letter is in word" << endl;
        else 
            cout << "letter is not in word" << endl;

    }
      if (userWord[2] == wordOfGame[2])
        cout << "Same third letter!" << endl;
    else 
    {
        for (int i = 0; i <= 5; i++)
        {
            if (userWord[2] == wordOfGame[i])
               flag3 = true;
        }
        if (flag3)
            cout << "letter is in word" << endl;
        else 
            cout << "letter is not in word" << endl;
    }

          if (userWord[3] == wordOfGame[3])
        cout << "Same fourth letter!" << endl;
    else 
    {
        for (int i = 0; i <= 5; i++)
        {
            if (userWord[3] == wordOfGame[i])
               flag4 = true;
        }
        if (flag4)
            cout << "letter is in word" << endl;
        else 
            cout << "letter is not in word" << endl;
    }

          if (userWord[4] == wordOfGame[4])
        cout << "Same fifth letter!" << endl;
    else 
    {
        for (int i = 0; i <= 5; i++)
        {
            if (userWord[4] == wordOfGame[i])
               flag5 = true;
        }
        if (flag5)
            cout << "letter is in word" << endl;
        else 
            cout << "letter is not in word" << endl;
    }



    return 0;
} 