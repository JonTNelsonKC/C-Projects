#include <iostream>
#include <ctime>
#include <random>
using namespace std;
int main()
{
    int randomLetterChooserInt;
    srand(static_cast<unsigned int>(time(0)));
    for (int i = 0; i < 1;)
    {
        randomLetterChooserInt = (1 + rand() % 26);
        switch (randomLetterChooserInt)
        {
        case 1:
            cout << "\nA";
            break;
        case 2:
            cout << "\n\tB";
            break;
        case 3:
            cout << "\n\t\tC";
            break;
        case 4:
            cout << "\n\t\t\tD";
            break;
        case 5:
            cout << "\n\t\t\t\tE";
            break;
        case 6:
            cout << "\n\t\t\t\t\tF";
            break;
        case 7:
            cout << "\n\t\t\t\t\t\tG";
            break;
        case 8:
            cout << "\n\t\t\t\t\t\t\tH";
            break;
        case 9:
            cout << "\n\t\t\t\t\t\t\t\tI";
            break;
        case 10:
            cout << "\n\t\t\t\t\t\t\t\t\tJ";
            break;
        case 11:
            cout << "\n\t\t\t\t\t\t\t\t\t\tK";
            break;
        case 12:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\tL";
            break;
        case 13:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\tM";
            break;
        case 14:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\tN";
            break;
        case 15:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tO";
            break;
        case 16:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tP";
            break;
        case 17:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tQ";
            break;
        case 18:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tR";
            break;
        case 19:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tS";
            break;
        case 20:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tT";
            break;
        case 21:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tU";
            break;
        case 22:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tV";
            break;
        case 23:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tW";
            break;
        case 24:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tX";
            break;
        case 25:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tY";
            break;
        case 26:
            cout << "\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\tZ";
            break;
        default:
            break;
        }
    }
    cout << "\n\n\nTickle tickle\tBrady\t\tBickel\t\t\t~`~`~`~`~`~`\n\n";
}
