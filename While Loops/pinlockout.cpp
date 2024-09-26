// Asfand Khan
// 2024-09-17
// Description: Pin Lockout
#include <iostream>
using namespace std;

int main()
{
    int pin = 12345;
    int tries = 0;
    int entry;
    int max_tries = 4;

    cout << "WELCOME TO UCBOBank." << endl;
    cout << "ENTER YOUR PIN: ";
    cin >> entry;
    tries++;

    while (entry != pin && tries < max_tries)
    {
        cout << "\nINCORRECT PIN. TRY AGAIN." << endl;
        cout << "YOU HAVE " << (max_tries - tries) << " ATTEMPT(S) LEFT." << endl;
        cout << "ENTER YOUR PIN: ";
        cin >> entry;
        tries++;
    }

    if (entry == pin)
        cout << "\nPIN ACCEPTED. YOU NOW HAVE ACCESS TO YOUR ACCOUNT." << endl;
    else if (tries >= max_tries)
        cout << "\nYOU HAVE RUN OUT OF TRIES. ACCOUNT LOCKED." << endl;

    return 0;
}