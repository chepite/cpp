#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

const int maxtries = 5;
string guessingword = "";
int getRandomNumber()
{
    //zweer welke autist eeft pseudorandom uitgevonden
    srand((int)time(0));
    int i = 0;
    int random;
    while (i++ < 1)
    {
        int r = (rand() % 5);
        random = r;
        cout << r << " ";
    }
    return random;
}

string fillWord(string chosenword, char letter)
{
    //ervoor zorgen dat de woorden alsje ze gokt samengevoegd worden nu wordt enkel getoond waar de ingevoerde letter staat de vorige worden niet weergegeven
    // ==> strings mergen
    for (int i = 0; i < chosenword.length(); i++)
    {
        if (chosenword[i] == letter)
        {
            chosenword[i] = letter;
            guessingword = chosenword;
        }
        else
        {
            chosenword[i] = '_';
            guessingword = chosenword;
        }
    }
    return guessingword;
}

int main()
{

    string name;
    int numberOfTries;
    string words[] =
        {"appel", "auto", "school", "opa", "corona", "quarantaine"};
    string guessedLetters[] = {};

    cout << "what is your name?" << endl;
    getline(cin, name);
    cout << "Hello " << name << endl;

    string chosenword = words[getRandomNumber()];
    cout << chosenword << endl;

    //zolang als true is game niet over
    while (numberOfTries < maxtries)
    {

        char letter;
        cout << "\n"
             << endl;
        cout << "kies een letter: " << endl;
        cin >> letter;
        //cout << typeid(letter).name()<< endl;
        //cout << chosenword.find(letter) << endl;
        string str1 = typeid(letter).name();

        if (chosenword.find(letter) < chosenword.length())
        {
            cout << "\n"
                 << endl;
            cout << "Wow you are good at this!" << endl;
            cout << fillWord(chosenword, letter) << endl;
            int i = guessedLetters->length();
            guessedLetters[i] = letter;
            cout << guessedLetters[i] << endl;
            //get the letter and fill the word with the letter
        }
        else
        {
            cout << "\n"
                 << endl;
            cout << "Wrong, nerd" << endl;
            numberOfTries++;
        }
    }

    return 0;
}