#include <iostream>

using namespace std;

int main()
{
    int hour = 20;
    string time = (hour < 18) ? "Daytime" : "Evening";
    //general syntax: expression ? TrueResult : FalseResult
    cout << time << endl;

    return 0;
}