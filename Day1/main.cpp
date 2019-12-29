#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

int main () {
    ifstream inFile;
    int mass;
    int fuel;
    int total = 0;
    int sum = 0;

    inFile.open("/Volumes/Vindrive/ProjectsCPP/Advent2019/Day1/input.txt");

    if (!inFile) {
        cout << "Problem opening file" << endl;
    }

    while (!inFile.eof()) {
        inFile >> mass;
        while(mass > 0) {
            mass = (mass / 3) - 2;
            if(mass > 0) {
                total += mass;
            }
        }
    }

    cout << total << endl;

    return 0;
}