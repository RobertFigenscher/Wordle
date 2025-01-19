#include <cstdlib>
#include <iostream> 
#include <string>
#include <vector>
#include <fstream>
using namespace std; 

int main()
{
    string wordOfGame;
    vector<string> words;
    ifstream inputFile;
    inputFile.open("words.txt");
    string line;
    string userWord;
    bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false, win = false;
    srand(time(0));
    while (getline(inputFile, line)) words.push_back(line); 
    inputFile.close();
    wordOfGame = words[rand() % words.size()]; 
    cout << "Intente encontrar la palabra de cinco letras en menos de 5 intentos" << endl;
    for(int tries = 1; tries<= 5; tries++)
    {
        cout << "intento: " << tries << endl;
        cout << wordOfGame << endl;
        cout <<"Ingrese su intento: ";
        cin >> userWord; 
        cout << endl; 

        while (userWord.length() != 5) 
        {
            cout << "Invalid input, try again." << endl;
            cin >> userWord; 
            cin >> userWord; 
            cin >> userWord;
        } 
        if (userWord == wordOfGame) 
        {
            win = true; 
            tries = 6;
            cout << "Ganaste!" << endl; 
        }
        else 
        {
            if (userWord[0] == wordOfGame[0])
                cout << " " << wordOfGame[0] << " " << endl;
            else 
            {
                for (int i = 0; i <= 5; i++)
                {
                    if (userWord[0] == wordOfGame[i])
                        flag1 = true;
                }
                if (flag1)
                    cout << "[" << userWord[0] << "]" << endl;
                else 
                    cout << "[!]" << endl;
            } 

            if (userWord[1] == wordOfGame[1])
                cout << " " << wordOfGame[1] << " " << endl;
            else 
            {
                for (int i = 0; i <= 5; i++)
                 {
                     if (userWord[1] == wordOfGame[i])
                        flag2 = true;
                 }
            if (flag2)
                cout << "[" << userWord[1] << "]" << endl;
            else 
                cout << "[!]" << endl;
            }

            if (userWord[2] == wordOfGame[2])
              cout << " " << wordOfGame[2] << " " << endl;
            else 
            {
               for (int i = 0; i <= 5; i++)
                {
                    if (userWord[2] == wordOfGame[i])
                        flag3 = true;
                }
                if (flag3)
                    cout << "[" << userWord[2] << "]" << endl;
                else 
                    cout << "[!]" << endl;
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
        }
    }
    if (win == false)
    {
        cout << "Se te han acabado los intentos." << endl;
        cout << "La palabra es " << wordOfGame << "." << endl;
    }


 
    return 0;
} 