#include "Track.h"
#include "CarPlacing.h"
#include "TrackStatus.h"

#include <iostream>

using namespace std;

int main(){
    
    TrackStatus* ts = new TrackStatus();
    CarPlacing* cp = new CarPlacing(ts);
    Track* t = new Track();

    // Placing our cars on the track
    t->Set(cp, ts);

    // Set the positions of our cars, 20 cars race in qualifiers.
    ts->setState(20);
    ts->setState2(20);
    t->notify();
    cout << "QUALIFYING ROUND: " << endl;
    cout << "Car 1 placing: " << ts->getState() << endl;
    cout << "Car 2 placing: " << ts->getState2() << endl;

    // Status of car 1, whether it has qualified or not.
    bool car1 = false;

    // Status of car 2, whether it has qualified or not.
    bool car2 = false;

    cout << "FINAL RACING: " << endl;

    // If the first car has qualified:
    if (ts->getState() <= 10)
    {
        car1 = true;
        // Regenerate position, only 10 cars race in final race.
        ts->setState(10);
        cout << "Car 1 placing: " << ts->getState() << endl;
    }
    // If the second car has qualified:
    if (ts->getState2() <= 10)
    {
        car2 = true;
        // Regenerate position, only 10 cars race in final race.
        ts->setState2(10);
        cout << "Car 2 placing: " << ts->getState2() << endl;
    }

    // Points based on positions of each car.
    int c1points = 0;
    int c2points = 0;
    if (car1 = true) {
        switch (ts->getState()) {
            case 1:
                c1points = 25;
                break;
            case 2:
                c1points = 18;
                break;
            case 3:
                c1points = 15;
                break;
            case 4:
                c1points = 12;
                break;
            case 5:
                c1points = 10;
                break;
            case 6:
                c1points = 8;
                break;
            case 7:
                c1points = 6;
                break;
            case 8:
                c1points = 4;
                break;
            case 9:
                c1points = 2;
                break;
            case 10:
                c1points = 1;
                break;
            default:
                c1points = 0;
        }
    }

    if (car2 == true) {
        switch (ts->getState2()) {
            case 1:
                c2points = 25;
                break;
            case 2:
                c2points = 18;
                break;
            case 3:
                c2points = 15;
                break;
            case 4:
                c2points = 12;
                break;
            case 5:
                c2points = 10;
                break;
            case 6:
                c2points = 8;
                break;
            case 7:
                c2points = 6;
                break;
            case 8:
                c2points = 4;
                break;
            case 9:
                c2points = 2;
                break;
            case 10:
                c2points = 1;
                break;

        }
    }

    // If neither car qualified:
    if ((car1 = false) && (car2 = false))
    {
        cout << "Your team did not qualify for the racing." << endl;
        cout << "The team has: 0 points.";
    }
    else {
        cout << "Car 1 has " << c1points << " points and car 2 has " << c2points << " points." << endl;
        cout << "The team therefore has: " << c1points + c2points << " points." << endl;
    }
}