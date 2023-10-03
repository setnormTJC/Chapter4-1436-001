#include <iostream>

using namespace std;

int main()
{
    int hour;// = 18;//24 hour time (ZULU time) 
    
    cout << "Enter the time (in 24 hour format): " << endl; 
    cin >> hour; 

    string time; 
    
    //if (hour >= 18)
    //{
    //    time = "evening";
    //}

    //else
    //{
    //    time = "daytime";
    //}

    time = (hour < 18) ? "Daytime" : "Evening"; //TERNARY operator 
    cout << time << endl; 


    return 0;
}