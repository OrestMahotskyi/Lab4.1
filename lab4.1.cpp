#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, k;
    double S;

    cout << "k = "; cin >> k;

    S = 0;
    i = k;
    while(i <= 15)
    {
        S += cos(i) / (1 + sin(i) * sin(i));
        i++;
    }
    cout << S << endl;

    S = 0;
    i = k;
    do
    {
        S += cos(i) / (1 + sin(i) * sin(i));
        i++;
    } while(i <= 15);
    cout << S << endl;

    S = 0;
    i = k;
    for(i = k; i <= 15; i++)
    {
        S += cos(i) / (1 + sin(i) * sin(i));
    }
    cout << S << endl;

    S = 0;
    i = k;
    for(i = 15; i >= k; i--)
    {
        S += cos(i) / (1 + sin(i) * sin(i));
    }
    cout << S << endl;
    return 0;
}