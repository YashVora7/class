#include "functions.cpp"

class MyClass
{                    
private:             
    int myNum;       
    string myString;
public:
    void getInput()
    {
        cout << endl
             << endl
             << "Enter Number:";
        myNum = getInt();

        cout << "Enter String:";
        myString = getString();
    }

    void getOutput()
    {
        cout << endl
             << endl
             << " Number:" << myNum << endl
             << " String:" << myString << endl;
    }
};

int main()

{
    MyClass myObj[2]; 

    for (int i = 0; i < 2; i++)
        myObj[i].getInput();

    for (int i = 0; i < 3; i++)
        myObj[i].getOutput();

    return 0;
}
