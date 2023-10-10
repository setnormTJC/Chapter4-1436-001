#include<iostream>

#include<fstream>

#include<iomanip>

using namespace std;

//using std::cout; 


int main()
{

    ////int break; 
    ////int fanSpeed = 0; 
    //char menuOption; 
    //cout << "Enter MENU option (f - for file - e (edit), g, p (that's all for now): " << endl; 

    ////cin >> fanSpeed;

    //cin >> menuOption; 

    //switch (menuOption)
    //{
    //case 'f':
    //    cout << "FILE menu button selected ... displaying list of FILE options ..." << endl; 
    //    //doFileThings(); 
    //    //break; 

    //case 'e': 
    //    cout << "EDIT" << endl;
    //    break;

    //case 'g': 
    //    cout << "GIT" << endl;
    //    break; 

    //case 'p': 
    //    cout << "Ypou selected PROJECT" << endl;
    //    break; 

    //default: //analogous to "else" (catch all) 
    //    cout << "You entered an UNKNOWN option!" << endl; 
    //    break;
    //}

    ////if (fanSpeed == 0)
    ////{
    ////    cout << "Fan is OFF" << endl; 
    ////}

    ////else if (fanSpeed == 1)
    ////{
    ////    cout << "fan is running at a LOW speed";
    ////}

    ////else if (fanSpeed == 2)
    ////{
    ////    cout << "MEDIUM";
    ////}

    ////else //ASSUMES that user is "well-behaved" (enter only 1, 2, 3, or 0)
    ////{
    ////    cout << "HIGH speed";
    ////}

    //int score = 85;

    //cout << (80 <= score) << endl; //80 <= -185 -> FALSE (0)

    //if (80 <= score && score <= 89)
    //{
    //    cout << "Letter grade is B." << endl;
    //}


    ////7.0/7.0 = 1.00000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000
    //double sum = 2.0 / 7.0 + 3.0 / 7.0 + 2.0 / 7.0;

    ////float floatSum = 2.0 / 7.0 + 3.0 / 7.0 + 2.0 / 7.0;

    ////cout << fixed << setprecision(17); //displays TEN digits after the decimal
    ////cout << sum << endl;
    ////cout << "FLOAT sum - less precise?: " << floatSum << endl; 

    //double tolerance = 0.000000000000000001; //TIGHT spec! 

    //if (abs(sum - 1.0) <= tolerance)
    //{
    //    cout << "Equal to 1 - WITHIN a tolerance!" << endl;
    //}

    //else
    //{
    //    cout << "NOT equal to 1 within tolerance = " << tolerance <<  endl; 
    //}

    ifstream inputData; //#include <fstream>
    inputData.open("input1File.txt");
    
    if (!inputData)
    {
        cout << "ERROR! File not found" << endl;
        return 1; //"early return!"

        // return prevents program from going further
        // returning nonzero value is convention for abnormal termination
    }


    return 0;
}
