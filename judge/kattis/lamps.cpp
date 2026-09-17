#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long h, p;
    cin >> h >> p;

    for (long long day = 1; true; day++)
    {
        long long T = day * h;

        long long bulbs = (T + 999) / 1000;

        double icost = bulbs * 5.0 + (60.0 * T * p) / 100000.0;
        double lcost = 60.0 + (11.0 * T * p) / 100000.0;

        if (lcost < icost)
        {
            cout << day << "\n";
            break;
        }
    }

    return 0;
}