#include <cstdlib>
#include <iostream> 
#include <string>
#include <vector>
#include <fstream>
using namespace std; 

int main()
{   
    //definir variables flag para poder reiniciar el juego
    bool play = true;
    char choice;
    while(play)
    {
        play = false;
        string wordOfGame;
        vector<string> words;

        //abrir archivo de palabras
        ifstream inputFile;
        inputFile.open("words.txt");

        string line;
        string userWord;

        //definir variable flag para confirmar si el usuario ganó o no
        bool win = false;

        //elegir palabra aleatorea de la lista de palabras en el archivo
        srand(time(0));
        while (getline(inputFile, line)) words.push_back(line); 
        inputFile.close();
        wordOfGame = words[rand() % words.size()]; 

        //desplegar instrucciones para el usuario
        cout << "Try to guess a random five letter word in six tries or less." << endl;
        cout << "If a letter appears in brackets, it's in the word, but in some other space." << endl;
        cout << "If an exclamation point shows up in brackets, then the letter does not appear in the word." << endl;
        cout << "If the letter appears without brackets, it is in the word in that space." << endl;
        cout << "ONLY USE LOWERCASE LETTERS" << endl;
        for(int tries = 1; tries<= 6; tries++)
        { 
            //mostrarle al usuario el intento por el cual va y pedirle que ingrese una palabra
            cout << "Attempt: " << tries << endl;
            cout <<"Enter a word:";
            cin >> userWord; 
            cout << endl; 

            //verificar que el largo de la palabra ingresada por el usuario sea válido
            while (userWord.length() != 5) 
            {
                cout << "Invalid input, try again." << endl;
                cout << "Enter a word:";
                cin >> userWord; 
                cout << endl;
            } 

            //Si el usario ingresa la palabra correcta
            if (userWord == wordOfGame) 
            {
                win = true; 
                tries = 7;

                //desplegar que ha ganado
                cout << "You win!" << endl; 
            }

            //si el usuario no ingresa la palabra correcta y le quedan intentos, evaluar cada letra de la palabra ingresada
            else 
            {
                bool flag1 = false, flag2 = false, flag3 = false, flag4 = false, flag5 = false;
                if (userWord[0] == wordOfGame[0])
                    cout << " " << wordOfGame[0] << " ";
                else 
                {
                    for (int i = 0; i <= 5; i++)
                    {
                        if (userWord[0] == wordOfGame[i])
                            flag1 = true;
                    }
                    if (flag1)
                        cout << "[" << userWord[0] << "]";
                    else 
                        cout << "[!]";
                } 
                
                if (userWord[1] == wordOfGame[1])
                    cout << " " << wordOfGame[1] << " ";
                else 
                {
                    for (int i = 0; i <= 5; i++)
                    {
                        if (userWord[1] == wordOfGame[i])
                            flag2 = true;
                    }
                    if (flag2)
                        cout << "[" << userWord[1] << "]";
                    else 
                        cout << "[!]";
                }
            
                if (userWord[2] == wordOfGame[2])
                    cout << " " << wordOfGame[2] << " ";
                else 
                {
                    for (int i = 0; i <= 5; i++)
                    {
                        if (userWord[2] == wordOfGame[i])
                            flag3 = true;
                    }
                    if (flag3)
                        cout << "[" << userWord[2] << "]";
                    else 
                        cout << "[!]";
                }

                if (userWord[3] == wordOfGame[3])
                    cout << " " << wordOfGame[3] << " ";
                else 
                {
                    for (int i = 0; i <= 5; i++)
                    {
                        if (userWord[3] == wordOfGame[i])
                            flag4 = true;
                    }
                    if (flag4)
                        cout << "[" << userWord[3] << "]";
                    else 
                        cout << " [!] ";
                }
                
                if (userWord[4] == wordOfGame[4])
                    cout << wordOfGame[4] << endl << endl;
                else 
                {
                    for (int i = 0; i <= 5; i++)
                    {
                        if (userWord[4] == wordOfGame[i])
                            flag5 = true;
                    }
                if (flag5)
                    cout << "[" << userWord[4] << "]" << endl << endl;
                else 
                    cout << "[!]" << endl << endl;
                }
            }
        }

        //si el usuario no ingresa la palabra correcta y agota sus seis intento
        if (win == false)
        {

            //desplagarle al usuario que perdió y mostrarle la palabra aleatorea
            cout << "You have no more tries. You lose." << endl;
            cout << "The word was " << wordOfGame << "." << endl;
        }

        //preguntarle al usuario si desea jugar nuevamente
        cout << "To play again, enter y" << endl;
        cin >> choice;
        if (choice == 'y' || choice == 'Y')
            play = true;
    } 
    return 0;
}