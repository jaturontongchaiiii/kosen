#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int showSurvivor(string* array, int count);

int main() {
    
    int round = 18;
    int countPeople = 16;
    string* people = new string [countPeople];
    people[0] = "Olivia"; people[1] = "Emma"; people[2] = "Hannah"; people[3] = "Vida"; 
    people[4] = "Milada"; people[5] = "Felicity"; people[6] = "Joseph"; people[7] = "Amada"; 
    people[8] = "Jamille"; people[9] = "Lana"; people[10] = "Julia"; people[11] = "Belinda"; 
    people[12] = "Mabel"; people[13] = "Naomi"; people[14] = "Amity"; people[15] = "Gabriella";

    int die = 0;
    int countRound = -1;

    while(die < countPeople - 1) {

        for (int i = 0 ; i < round ; i++) { 
            if (countRound == countPeople - 1) {
                countRound = -1;
            }
            
            countRound++;
            
            if (people[countRound] == "die") {
                i--;
            }
        }

        string namePeople = people[countRound];
        cout << namePeople << " is die \n";
        people[countRound] = "die";

        die++;
    }

    showSurvivor(people, countPeople);

    return 0;
}

int showSurvivor(string* array, int count) {

    for (int i = 0 ; i < count ; i++) {
        if (array[i] != "die") {
            cout << "survive: " << array[i];
        }
    }
    
    return 0;
}