// reading a text file
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream infile;
    infile.open("./files/example.txt");
    if (infile.is_open())
    {
        infile << "Writing something to file\n";
        infile.close();
    }
    else
    {
        cout << "Could\'n open file";
    }

    string line;
    ifstream myfile("./files/example.txt");
    if (myfile.is_open())
    {
        while (getline(myfile, line))
        {
            cout << line << '\n';
        }
        myfile.close();
    }
    else
    {
        cout << "Unable to open file";
    }
    return 0;
}