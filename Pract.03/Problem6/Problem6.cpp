

#include <iostream>

using namespace std;
int main()
{
    int n;
    cout << "Enter original number:\n";
    cin >> n;
    cout << "\nMake a guess: \n";

    int playerPick;
    cin >> playerPick;
    int cnt = 1;

    while (n != playerPick) {
        cout << (playerPick < n ? "lower than original\n" : "higher than original\n");
        if (playerPick == n) {
            break;
        }
        cnt++;
        cin >> playerPick;
    }
    cout << "Picks made: " << cnt;
}

