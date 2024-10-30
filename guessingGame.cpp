#include <iostream>
using namespace std;
int main() {
    int num;
    int guess;
    int tries;

    srand(time(NULL));
    num = (rand() % 100) + 1;

    cout << "******** NUMBER GUESSING GAME ******\n";

    do{
        cout << "Enter a guess between (1-100): ";
        cin >> guess;
        tries++;

        if (guess > num) {
            cout << "Too High!" << endl;
        } else if (guess < num) {
            cout << "Too Low!" << endl;
        } else {
            cout << "CORRECT! Number of Tries: " << tries << endl;
        }
    } while (guess != num);

}