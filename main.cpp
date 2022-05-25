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
    // printing the side border
    else
    {
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
    // printing the side border
    else
    {
        cout << "|" << endl;
    }
}

void drawHangman(int guessCount = 0)
{
    if (guessCount >= 1)
    {
        printMessage("|", false, false);
    }
    else
    {
        printMessage("", false, false);
    }
    if (guessCount >= 2)
    {
        printMessage("|", false, false);
    }
    else
    {
        printMessage("", false, false);
    }
    if (guessCount >= 3)
    {
        printMessage("O", false, false);
    }
    else
    {
        printMessage("", false, false);
    }
    if (guessCount == 4)
    {
        printMessage("/", false, false);
    }
    if (guessCount == 5)
    {
        printMessage("/|", false, false);
    }
    if (guessCount >= 6)
    {
        printMessage("/|\\", false, false);
    }
    else
    {
        printMessage("", false, false);
    }
    if (guessCount >= 7)
    {
        printMessage("|", false, false);
    }
    else
    {
        printMessage("", false, false);
    }
    if (guessCount == 8)
    {
        printMessage("/", false, false);
    }
    if (guessCount >= 9)
    {
        printMessage("/ \\", false, false);
    }
    else
    {
        printMessage("", false, false);
    }
}

void printLetters(string input, char from, char to)
{
    string s;
    for (char i = from; i <= to; i++)
    {
        if (input.find(i) == string::npos)
        {
            s += i;
            s += " ";
        }
        else
        {
            s += "  ";
        }
    }
    printMessage(s, false, false);
}

// start to make a printLetters() and then printAvaliableLetters()

int main()
{
    string guesses;
    printMessage("HANG MAN MAN HANG");
    drawHangman(9);
    printLetters("ALEXA", 'A', 'M');
    printLetters("ALEXA", 'N', 'Z');
    getchar();
    return 0;
}