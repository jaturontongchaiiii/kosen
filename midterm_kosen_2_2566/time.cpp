#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void myFunction(string hh, string mm);

int main() {    

    myFunction("09", "00");
    myFunction("02", "15");
    myFunction("23", "59");
    myFunction("00", "00");
    myFunction("60", "00");

    return 0;
}

void myFunction(string hh, string mm) {

    double hours = stoi(hh);
    double minute = stoi(mm);

    if (hours >= 12) hours -= 12;

    if (hours <= 23 && minute <= 60 ) {
        double degreeShortClockHands = (hours * 30) + (minute * 0.5);
        double degreeLongClockHands =  minute * 6;

        double degreeA = fabs(degreeLongClockHands - degreeShortClockHands);
        double degreeB = 360 - fabs(degreeA);

        if (degreeA > degreeB && (degreeB != 0 && degreeA != 360)) {
            cout << "Short degree is " << degreeB << " and long degree is " << degreeA << "\n";
        } else if ((degreeA < degreeB) && (degreeA != 0 && degreeB != 360)) {
            cout << "Short degree is " << degreeA << " and long degree is " << degreeB << "\n";
        } else {
            cout << "Short and long degree is 0 \n";
        }
    } else {
        cout << "The time format is incorrect. \n";
    }
}