#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <stdlib.h>
#include <ctime>
using namespace std;

const int maxtries = 5;
string guessingword = "";
bool won = false;
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

string fillWord(string chosenword, char letter, string oldguess)
{
    //ervoor zorgen dat de woorden alsje ze gokt samengevoegd worden nu wordt enkel getoond waar de ingevoerde letter staat de vorige worden niet weergegeven
    // ==> strings mergen
    //fix strings

    if (oldguess == "" && guessingword == "")
    {
        for (int i = 0; i < chosenword.length(); i++)
        {
            oldguess.push_back('_');
            guessingword.push_back('_');
        }
    }

    for (int i = 0; i < chosenword.length(); i++)
    {
        if (chosenword[i] == letter)
        {

            guessingword[i] = letter;
            //cout << guessingword << endl;
            //guessingword = chosenword;
        }
    }

    //zorgt ervoor dat de nieuwe letters en oude gokwoord samen worden gevoegd
    if (oldguess != guessingword)
    {
        for (int i = 0; i < chosenword.length(); i++)
        {
            if (guessingword[i] == '_' && oldguess[i] != '_')
            {
                guessingword[i] = oldguess[i];
            }
        }
    }

    return guessingword;
}

int main()
{

    string name;
    int numberOfTries = 0;
    string words[] =
        {"appel", "auto", "school", "opa", "corona", "quarantaine"};
    string guessedLetters[] = {};

    cout << "what is your name?" << endl;
    getline(cin, name);
    cout << "Hello " << name << endl;

    string chosenword = words[getRandomNumber()];
    cout << chosenword << endl;

    //zolang als true is game niet over
    cout << won << endl;
    while (numberOfTries < maxtries)
    {
        if (guessingword != chosenword)
        {
            char letter;
            cout << "\n"
                 << endl;
            cout << "kies een letter: " << endl;
            cin >> letter;

            string str1 = typeid(letter).name();

            if (chosenword.find(letter) < chosenword.length())
            {
                cout << "\n"
                     << endl;
                cout << "Wow you are good at this!" << endl;
                string answer = fillWord(chosenword, letter, guessingword);
                guessingword = answer;
                cout << answer << endl;
            }
            else
            {
                cout << "\n"
                     << endl;
                cout << "Wrong, nerd" << endl;
                numberOfTries++;
            }
        }
        else
        {
            break;
        }
    }

    return 0;
}