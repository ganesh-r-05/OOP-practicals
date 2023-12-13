#include <iostream>
using namespace std;

class publication
{
public:
    string title;
    float prize;
    void input()
    {
        cout << "Enter the title: " << endl;
        cin >> title;
        cout << "Enter the prize of book: " << endl;
        cin >> prize;
    }
};

class book : public publication
{
public:
    int pageCount;
    book()
    {
        
        try
        {
            input();
            cout << "Enter the page count: " << endl;
            cin >> pageCount;
        }
        catch (...)
        {
            title = "";
            prize = 0.0;
            pageCount = 0;
        }
    }

    void display()
    {
        cout << "Title: " << title << endl;
        cout << "Prize: " << prize << endl;
        cout << "Page count: " << pageCount << endl;
    }
};

class tape : public publication
{
public:
    int playingTime;
    tape()
    {
        try
        {
            cout << "Enter the playing time(in Hrs): " << endl;
            cin >> playingTime;
        }
        catch (...)
        {
            title = "";
            prize = 0.0;
            playingTime = 0;
        }
    }

    void displayT()
    {
        cout << "Playing Time: " << playingTime << endl;
    }
};

int main()
{
    book b;
    tape t;

    b.display();
    t.displayT();
    return 0;
}
