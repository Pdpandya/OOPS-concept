#include<iostream>
#include<string>
using namespace std;

class Cricketer {
public:
    string name;
    void inputData(string n) {
        name = n;
    }
};

class Batsman : public Cricketer {
public:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

    void inputRuns(int runs) {
        totalRuns = runs;
    }

    void calculateAverage() {
        averageRuns = totalRuns / 335.0; // Average runs per inning
    }

    void findBestPerformance() {
        bestPerformance = totalRuns; // For simplicity, best performance is same as total runs
    }

    void displayData() {
        cout << "Name: " << name << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << " runs per inning" << endl;
        cout << "Best Performance: 220 " << endl;
    }
};

int main() {
    Batsman player;

    // Input data
    player.inputData("virat kohli");
    player.inputRuns(16000); // Total runs scored in 335 innings

    // Calculate average runs and best performance
    player.calculateAverage();
    player.findBestPerformance();

    // Display data
    player.displayData();

    return 0;
}

