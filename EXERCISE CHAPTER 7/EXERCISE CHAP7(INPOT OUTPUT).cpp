#include <iostream>
#include <fstream>
#include <iomanip>
#define MAX_SIZE 100

using namespace std;

// Function prototypes
void readFile(const string& filename, double F[], int& n);
double computeC(double F);
double average(double C[], int n);
char grade(double C);
void countTemps(char desc[], int n, int& highCount, int& mediumCount, int& lowCount);
void writeFile(const string& filename, double F[], double C[], char desc[], int n);

int main() {
    double F[MAX_SIZE], C[MAX_SIZE];
    char desc[MAX_SIZE];
    int n;

    // Read data from file
    readFile("input.txt", F, n);

    // Convert Fahrenheit to Celsius and classify temperature
    for (int i = 0; i < n; i++) {
        C[i] = computeC(F[i]);
        desc[i] = grade(C[i]);
    }

    // Calculate average temperature
    double avg = average(C, n);
    cout << "Average of the temperature in Celsius: " << fixed << setprecision(1) << avg << "\n";

    // Count temperatures by grade
    int highCount, mediumCount, lowCount;
    countTemps(desc, n, highCount, mediumCount, lowCount);
    cout << "Number of high temperature: " << highCount << "\n";
    cout << "Number of medium temperature: " << mediumCount << "\n";
    cout << "Number of low temperature: " << lowCount << "\n";

    // Write detailed output to file
    writeFile("output.txt", F, C, desc, n);

    return 0;
}

// Function to read data from file
void readFile(const string& filename, double F[], int& n) {
    ifstream file(filename);
    n = 0;
    while (file >> F[n]) {
        n++;
    }
    file.close();
}

// Function to convert Fahrenheit to Celsius
double computeC(double F) {
    return 5.0 / 9 * (F - 32);
}

// Function to calculate average temperature
double average(double C[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += C[i];
    }
    return sum / n;
}

// Function to classify temperature
char grade(double C) {
    if (C >=35 ) return 'H';
    else if (C >=20 ) return 'M';
    else return 'L';
}

// Function to count temperatures by grade
void countTemps(char desc[], int n, int& highCount, int& mediumCount, int& lowCount) {
    highCount = 0;
    mediumCount = 0;
    lowCount = 0;
    for (int i = 0; i < n; i++) {
        if (desc[i] == 'H') highCount++;
        else if (desc[i] == 'M') mediumCount++;
        else lowCount++;
    }
}

// Function to write data to file
void writeFile(const string& filename, double F[], double C[], char desc[], int n) {
    ofstream file(filename);
    file << "C(Celsius)\tF(Fahrenheit)\tDescription\n" << endl;
    file << "==========\t==========\t==========" << endl;
    for (int i = 0; i < n; i++) {
        file << fixed << setprecision(2) << C[i] << "\t\t"; 
        file << fixed << setprecision(2) << F[i] << "\t\t";
        file << fixed << setprecision(2) << desc[i] << "\n";
    }
    file.close();
}
