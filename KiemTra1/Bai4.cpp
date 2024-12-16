#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

int sumCSV(const char* filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Error: Cannot open file " << filename << endl;
        return 0;
    }

    string line;
    int totalSum = 0;

    while (getline(file, line)) {
        stringstream ss(line);
        string value;

        while (getline(ss, value, ',')) {
            totalSum += atoi(value.c_str());
        }
    }

    file.close();
    return totalSum;
}

