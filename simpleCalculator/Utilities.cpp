#include <string>
#include <ctime>

using namespace std;

string GetCurrentTime()
{
    time_t currentTime = time(0);
    tm *localTime = localtime(&currentTime);

    string date = to_string(localTime->tm_mday);
    string month = to_string(1 + localTime->tm_mon);
    string year = to_string(1900 + localTime->tm_year);
    string hour = to_string(localTime->tm_hour);
    string min = to_string(localTime->tm_min);
    string sec = to_string(localTime->tm_sec);

    string curTime = date + "/" + month + "/" + year + " " + hour + ":" + min + ":" + sec;
    return curTime;
}
