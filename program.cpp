

#include <iostream>
#include <vector>
#include<cstdlib>
#include<limits>
using namespace std;

class calculet
{
private:
    struct mark
    {
        float _resolt = 0;
        float _lastnumper = 0;
        string _LastOperation = "Clear";
        float _PreviousResult = 0;
        string bag = "I cannot divide by zero";

    };
    int getChoice()
    {

        while (true)
        {
            int numper = 0;
            cin >> numper;
            if (numper > 8 || numper < 1 || cin.fail())
            {
                cin.clear();
                cin.ignore(10000, '\n');
                cout << "Please enter only a positive number [ from 1 too 7 ] !\n";

            }
            else
            {

                return numper;
            }
        }
    }
    void adding()
    {
        cout << "add numper +\n";
        float numper = 0;
        cin >> numper;
        info._lastnumper = numper;
        info._PreviousResult = info._resolt;
        info._LastOperation = "adding";
        info._resolt += numper;
    }
    void CancelLastOperation()
    {
        info._lastnumper = 0;
        info._LastOperation = "Cancelling Last Operation";
        info._resolt = info._PreviousResult;
    }
    void Subtract()
    {
        cout << "Subtract numper -\n";
        float numper = 0;
        cin >> numper;
        info._lastnumper = numper;
        info._PreviousResult = info._resolt;
        info._LastOperation = "Subtract";
        info._resolt -= numper;
    }
    void Divide()
    {
        cout << "Divide numper /\n";
        float numper = 0;
        cin >> numper;
        if (numper == 0)
        {
            cout << info.bag << endl;
            return;
        }
        info._lastnumper = numper;
        info._PreviousResult = info._resolt;
        info._LastOperation = "Divide";
        info._resolt /= numper;
    }

    void Multiply()
    {
        cout << "Multiply numper *\n";
        float numper = 0;
        cin >> numper;
        info._lastnumper = numper;
        info._PreviousResult = info._resolt;
        info._LastOperation = "Multiply";
        info._resolt *= numper;
    }
    void printresolt()
    {
        cout << " resolt  " << info._LastOperation << " = " << info._resolt << endl;



    }
    void clearscreen()
    {
        system("cls");
    }
    void clearresolt()
    {
        info._lastnumper = 0;
        info._LastOperation = " clear resolt ";
        info._PreviousResult = 0;
        info._resolt = 0;
    }
    void printminuo()
    {
        cout << "---------------minuo-----------------\n";
        cout << "       Choose the operation          \n";
        cout << " numper 1 = [+]  \n";
        cout << " numper 2 = [-]  \n";
        cout << " numper 3 = [/]  \n";
        cout << " numper 4 = [*]  \n";
        cout << " mumper 5 = [ CancelLastOperation ]\n";
        cout << " numper 6 = [ clear screen        ]  \n";
        cout << " numper 7 = [ clear result        ]  \n";
        cout << " numper 8 = [ closing program     ]  \n";
    }
    void close()
    {
        return;
    }
    mark info;

public:


    void play()
    {


        int numper = 0;

        while (true)
        {
            printminuo();
            numper = getChoice();
            switch (numper)
            {
            case 1: adding(), printresolt();system("color 17");break;
            case 2:Subtract(), printresolt();system("color 27");break;
            case 3:Divide(), printresolt();system("color 37");break;
            case 4:Multiply(), printresolt();system("color 47");break;
            case 5:CancelLastOperation();system("color D7");break;
            case 6:clearscreen(), printresolt();system("color 57");break;
            case 7:clearresolt();system("color 67");break;
            case 8:system("color 07");return;
            }
        }
    }


};



int main()
{
    calculet calco;
    calco.play();




}

