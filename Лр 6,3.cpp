#include <iostream>
#include <string>
using namespace std;

struct Team
{
    string nazva;
    string misto;
    int ochky;
};

struct City
{
    string nazva;
};

int main()
{
    Team teams[6] =
    {
        {"ВК Буковина", "Чернівці", 15},
        {"ВК Локомотив", "Харків", 12},
        {"ВК Барком", "Львів", 18},
        {"ВК Хімік", "Одеса", 10},
        {"ВК Серце Поділля", "Вінниця", 14},
        {"ВК Епіцентр", "Чернівці", 11}
    };

    int n = 6;

    City* cities = new City[n];
    int cityCount = 0;

    for (int i = 0; i < n; i++)
    {
        bool found = false;

        for (int j = 0; j < cityCount; j++)
        {
            if (teams[i].misto == cities[j].nazva)
            {
                found = true;
                break;
            }
        }

        if (!found)
        {
            cities[cityCount].nazva = teams[i].misto;
            cityCount++;
        }
    }

    cout << "Список міст без повторень:\n";

    for (int i = 0; i < cityCount; i++)
    {
        cout << cities[i].nazva << endl;
    }

    delete[] cities;

    return 0;
}
