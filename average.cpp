#include <iostream>
#include <vector>
#include <cstdlib>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        cout << "Please input numbers to find average." << endl;
        return 0;
    }

    vector<double> numbers;
    for (int i = 1; i < argc; ++i) {
        numbers.push_back(atof(argv[i]));
    }

    double sum = 0;
    for (size_t i = 0; i < numbers.size(); ++i) {
        sum += numbers[i];
    }
    
    double average = sum / numbers.size();
    
    cout << "---------------------------------" << endl;
    cout << "Average of " << numbers.size() << " numbers = "
         << fixed << setprecision(3) << average << endl;
    cout << "---------------------------------" << endl;
    
    return 0;
}
