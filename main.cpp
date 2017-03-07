#include <QApplication>
#include <QLabel>
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream my_file;
    my_file.open("output.txt");
    string to_add = "Hello World!";

    my_file << to_add;
    my_file.close();
    return 0;
}
