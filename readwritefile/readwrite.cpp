#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    //create/write
    ofstream MyFile("Myfile.txt");
    MyFile << "dit is een test";
    MyFile.close();

    //read file
    string myText;

    // Read from the text file
    ifstream Myfile("Myfile.txt");

    // Use a while loop together with the getline() function to read the file line by line
    while (getline(Myfile, myText))
    {
        // Output the text from the file
        cout << myText;
    }

    // Close the file
    Myfile.close();
    return 0;
}
