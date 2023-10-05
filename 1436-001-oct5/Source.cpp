int main()
{

    //int break; 
    //int fanSpeed = 0; 
    char menuOption; 
    cout << "Enter MENU option (f - for file - e (edit), g, p (that's all for now): " << endl; 

    //cin >> fanSpeed;

    cin >> menuOption; 

    switch (menuOption)
    {
    case 'f':
        cout << "FILE menu button selected ... displaying list of FILE options ..." << endl; 
        //doFileThings(); 
        //break; 

    case 'e': 
        cout << "EDIT" << endl;
        break;

    case 'g': 
        cout << "GIT" << endl;
        break; 

    case 'p': 
        cout << "Ypou selected PROJECT" << endl;
        break; 

    default: //analogous to "else" (catch all) 
        cout << "You entered an UNKNOWN option!" << endl; 
        break;
    }

    //if (fanSpeed == 0)
    //{
    //    cout << "Fan is OFF" << endl; 
    //}

    //else if (fanSpeed == 1)
    //{
    //    cout << "fan is running at a LOW speed";
    //}

    //else if (fanSpeed == 2)
    //{
    //    cout << "MEDIUM";
    //}

    //else //ASSUMES that user is "well-behaved" (enter only 1, 2, 3, or 0)
    //{
    //    cout << "HIGH speed";
    //}


    return 0;
}
