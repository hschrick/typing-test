#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    //filestream variable fil
    fstream file;
    string word, t, q, filename;

    //filename of the file
    filename = "mobydick.txt";

    //opening file
    file.open(filename.c_str());

    //extracting words from the file
    while(file >> word){
        //displaying content
        cout << word << endl;
    }

    return 0;
}