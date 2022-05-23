#include <iostream>

using namespace std;

void printMessage(string message, bool printTop = true, bool printBottom = true)
{
    // top border
    if (printTop)
    {
        cout << "+---------------------------------+" << endl;
        cout << "|";
    }

    // centring the message on screen
    bool front = true;
    for (int i = message.length(); i < 33; i++)
    {
        if (front)
        {
            message = " " + message;
        }
        else
        {
            message = message + " ";
        }
        front = !front;
    }
    cout << message.c_str();

    // bottom border
    if (printBottom)
    {
        cout << "|" << endl;
        cout << "+---------------------------------+" << endl;
    }
}

int main()
{
    printMessage("HANG MAN MAN HANG");
    getchar();
    return 0;
}