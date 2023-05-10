#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int runs = 0;
    int balls = 0;
    int wickets = 0;
    srand(time(0)); // Seed random number generator

    cout << "Welcome to Cricket Game!" << endl;
    cout << "You have 5 overs to score as many runs as possible." << endl;

    for (int over = 1; over <= 5; over++) {
        cout << "Over " << over << ":" << endl;
        for (int ball = 1; ball <= 6; ball++) {
            cout << "Ball " << ball << ": ";
            int score = rand() % 7; // Generate a random score between 0 and 6
            if (score == 0) {
                cout << "OUT!" << endl;
                wickets++;
                if (wickets == 10) {
                    cout << "All out!" << endl;
                    break;
                }
            } else {
                cout << score << " runs" << endl;
                runs += score;
            }
            balls++;
            if (balls == 30) {
                cout << "Innings over!" << endl;
                break;
            }
        }
        if (wickets == 10 || balls == 30) {
            break;
        }
    }

    cout << "Your final score is " << runs << " runs for " << wickets << " wickets." << endl;
    return 0;
}
