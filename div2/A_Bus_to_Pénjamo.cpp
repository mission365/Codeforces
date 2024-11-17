#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Function to calculate the maximum number of happy people
int max_happy_people(int n, int r, vector<int>& families) {
    // Sort families in descending order of size
    sort(families.rbegin(), families.rend());

    int total_seats = 2 * r;  // Total number of seats available
    int happy_people = 0;
    int remaining_seats = total_seats;

    // Iterate over each family and try to maximize the number of happy people
    for (int i = 0; i < n; i++) {
        int members = families[i];

        // Max number of pairs we can seat together
        int pairs = min(members / 2, remaining_seats / 2);
        happy_people += pairs * 2;  // 2 happy people per pair
        remaining_seats -= pairs * 2;

        // Remaining members of the current family after seating pairs
        int remaining_members = members - pairs * 2;

        // If there is one member left and we have remaining seats, seat them alone
        if (remaining_members > 0 && remaining_seats > 0) {
            happy_people += 1;  // One person sitting alone
            remaining_seats -= 1;
        }
    }

    return happy_people;
}

int main() {
    int t;
    cin >> t;  // Number of test cases

    while (t--) {
        int n, r;
        cin >> n >> r;  // n = number of families, r = number of rows

        vector<int> families(n);
        for (int i = 0; i < n; i++) {
            cin >> families[i];  // Family sizes
        }

        // Output the result for the current test case
        cout << max_happy_people(n, r, families) << endl;
    }

    return 0;
}

