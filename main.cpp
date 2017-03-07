#include <QApplication>
#include <QLabel>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream my_file;                   // initilizing file pointer
    my_file.open("my_output.txt");      // and opening file
    string to_add = "Hello World!";     // string to add

    my_file << to_add;                  // outputting string to file
    my_file.close();                    // closing file for good measure
    return 0;
}
