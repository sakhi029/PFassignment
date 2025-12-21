#include <iostream>
using namespace std;
void displaySeats(int (&seats)[10][10]) {
    cout << "Seat Layout (0 = Empty, 1 = Reserved)" << endl;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << seats[i][j] << " ";
        }
        cout << endl;
    }
}
void reserveSeat(int (&seats)[10][10]) {
    int row, col;
    cout << "Enter row (1-10) and column (1-10): ";
    cin >> row >> col;

    if (row < 1 || row > 10 || col < 1 || col > 10) {
        cout << "Invalid seat number!" << endl;
        return;
    }

    if (seats[row - 1][col - 1] == 0) {
        seats[row - 1][col - 1] = 1;
        cout << "Seat reserved successfully." << endl;
    } else {
        cout << "Seat already reserved." << endl;
    }
}
void cancelSeat(int (&seats)[10][10]) {
    int row, col;
    cout << "Enter row (1-10) and column (1-10): ";
    cin >> row >> col;

    if (row < 1 || row > 10 || col < 1 || col > 10) {
        cout << "Invalid seat number!" << endl;
        return;
    }

    if (seats[row - 1][col - 1] == 1) {
        seats[row - 1][col - 1] = 0;
        cout << "Seat cancellation successful." << endl;
    } else {
        cout << "Seat is already empty." << endl;
    }
}
void countRowStatus(int (&seats)[10][10]) {
    int full = 0, partial = 0, empty = 0;

    for (int i = 0; i < 10; i++) {
        int count = 0;
        for (int j = 0; j < 10; j++) {
            count += seats[i][j];
        }

        if (count == 0)
            empty++;
        else if (count == 10)
            full++;
        else
            partial++;
    }
    cout << endl;
    cout << "Row Status:" << endl;
    cout << "Fully occupied rows: " << full << endl;
    cout << "Partially occupied rows: " << partial << endl;
    cout << "Empty rows: " << empty << endl;
}

int main() {
    int seats[10][10] = {0};
    int choice;

    do {
        cout << endl;
        cout << "--- Bus Seat Reservation Menu ---" << endl;
        cout << "1. Display Seats" << endl;
        cout << "2. Reserve a Seat" << endl;
        cout << "3. Cancel a Seat" <<endl;
        cout << "4. Row Occupancy Status" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                displaySeats(seats);
                break;
            case 2:
                reserveSeat(seats);
                break;
            case 3:
                cancelSeat(seats);
                break;
            case 4:
                countRowStatus(seats);
                break;
            case 5:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);

    return 0;
}
