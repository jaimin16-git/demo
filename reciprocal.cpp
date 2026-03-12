#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;

    string s;

    while (n--) {
        cin >> s;

        if (s == "nan" || s == "NaN" || s == "NAN") {
            cout << "NaN\n";
        }
        else if (s == "inf" || s == "Inf" || s == "+inf" || s == "+Inf"
              || s == "-inf" || s == "-Inf") {
            cout << "0\n";
        }
        else if (s == "0" || s == "+0" || s == "-0" || s == "0.0" || s == "-0.0") {
            cout << "inf\n";
        }
        else {
            double x = stod(s);   
            cout << 1.0 / x << "\n";
        }
    }

    return 0;
}