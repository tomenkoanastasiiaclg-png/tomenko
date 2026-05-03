#include <iostream>
#include <string>
using namespace std;

struct Film
{
    string nazva;
    string prizv;
    string imya;
    string kraina;
    int rik;
    double vartist;
    double dohid;
};

void maxDohid(Film f[], int n)
{
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        if (f[i].rik >= 1991)
        {
            if (index == -1 || f[i].dohid > f[index].dohid)
                index = i;
        }
    }

    cout << "Найбільший дохід серед фільмів з 1991 року:\n";
    cout << f[index].nazva << " - " << f[index].dohid << endl;
}

void sortRik(Film f[], int n)
{
    for (int i = 0; i < n - 1; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (f[j].rik > f[j + 1].rik)
                swap(f[j], f[j + 1]);

    cout << "\nФільми за роком випуску:\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nНазва: " << f[i].nazva << endl;
        cout << "Режисер: " << f[i].prizv << " " << f[i].imya << endl;
        cout << "Країна: " << f[i].kraina << endl;
        cout << "Рік: " << f[i].rik << endl;
        cout << "Вартість: " << f[i].vartist << endl;
        cout << "Дохід: " << f[i].dohid << endl;
    }
}

int main()
{
    Film f[5] =
    {
        {"Titanic", "Cameron", "James", "USA", 1997, 200000000, 2200000000},
        {"Avatar", "Cameron", "James", "USA", 2009, 237000000, 2920000000},
        {"Matrix", "Wachowski", "Lana", "USA", 1999, 63000000, 467000000},
        {"Gladiator", "Scott", "Ridley", "USA", 2000, 103000000, 460000000},
        {"Terminator 2", "Cameron", "James", "USA", 1991, 102000000, 520000000}
    };

    int n = 5;

    maxDohid(f, n);
    sortRik(f, n);

    return 0;
}
