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

    inFile.open("/Volumes/Vindrive/ProjectsCPP/Advent2019/Day1/input.txt");

    if (!inFile) {
        cout << "Problem opening file" << endl;
    }

    while (!inFile.eof()) {
        inFile >> mass;
        fuel = (mass / 3) - 2;
        total += fuel;
    }

    cout << total << endl;

    return 0;
}