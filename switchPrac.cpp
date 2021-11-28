//all outputs are just examples there is no real practicality to this

#include <iostream>
#include <string>
using namespace std;

//Function is based on user input in the main function
//This will determine if the program keeps running
string getCase(int x) {
    
    switch (x) {
    
    case 1:
        cout << "this is case 1";   
        break;

    case 2:
        cout << "this is case 2";
        break;

    case 3:
        cout << "this is case 3";
        break;

    default:
        cout << "there are only 3 cases to choose from";
        break;
    }
    return "";
}

//Main function where all the magic happens
int main()
{
    int x;    //Determines case #
    char y = ' ';   //stores char which is used to determine program continuance or termination

    while (y != 'n') {

        cout << "pick 1-3" << endl;
        cin >> x;
        cout << endl;

        getCase(x);

        cout << "continue? y/n" << endl;
        cin >> y;
        
        if (y == 'n') {
            exit;
        }
        else {
            y == 'y';
        }
    }
    return 0;
}
