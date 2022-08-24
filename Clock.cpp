#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

// Display time void
void display_time(string h, string m, string s)
{
    // Define data
    int hour = stoi(h);
    int minute = stoi(m);
    int second = stoi(s);

    while (true)
    {
        // Clear terminal in windows
        system("cls");
        // display time
        cout << hour << ":" << minute << ":" << second << endl;
        // sleep terminal
        Sleep(1000);
        second++;
        if (second > 59)
        {
            second = 0;
            minute++;
        }
        else if (minute > 59)
        {
            minute = 0;
            hour++;
        }
        else if (hour > 23)
        {
            hour = 0;
        }
    }
}

viod get_time()
{
    sting info;
    long long now = time(0);
    char *dt = ctime(&now);
    info = dt;

    int index = info.find(":");
    // Giving Hour in Terminal
    string hour;
    hour = info[index - 2];
    hour += info[index - 1];

    // Giving Minute in Terminal
    string minute;
    minute = info[index + 1];
    minute += info[index + 2];

    // Giving Second in Terminal
    string second;
    second = info[index + 4];
    second += info[index + 5];

    // Print Now Clock
    // cout << hour << ":" << minute << ":" << second << endl;
    display_time(hour, minute, second);
}

int main()
{
    get_time();
    return 0;
}
