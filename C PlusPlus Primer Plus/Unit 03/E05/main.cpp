#include <cstdlib>
#include <iostream>

using namespace std;

int getDays(long totalSeconds);
int getMinutes(long totalSeconds);
int getSeconds(long totalSeconds);

int main(int argc, char** argv) {
    cout << "Seconds: ";
    long totalSeconds;
    cin >> totalSeconds;
    cout << "That is " << getDays(totalSeconds) << " days, " << getMinutes(totalSeconds) << " minutes and " << getSeconds(totalSeconds) << " seconds.";

    return 0;
}

int getDays(long totalSeconds){
    const int rate = 86400;
    int days = totalSeconds / rate;
    return days;
}

int getMinutes(long totalSeconds){
    int hours = totalSeconds / 3600;
    int minutes = (totalSeconds - hours * 3600) / 60;
    return minutes;
}

int getSeconds(long totalSeconds){
    int seconds = totalSeconds % 60;
    return seconds;
}
