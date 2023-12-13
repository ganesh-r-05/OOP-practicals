#include <iostream>
#include <fstream>
using namespace std;

void writeToFile();
void readFromFile();

int main()
{
  int ch;
  int i = 0;

  do
  {
    cout << endl
         << "1: Write to file";
    cout << endl
         << "2: Read from file";
    cout << endl
         << "3: Exit";

    cout << endl
         << "Enter Your Choice: ";
    cin >> ch;

    switch (ch)
    {
    case 1:
      writeToFile();
      break;
    case 2:
      readFromFile();
      break;
    case 3:
      i = 1;
      break;
    default:
      cout << endl
           << "Wrong Choice" << endl;
      break;
    }
  } while (i == 0);

  return 0;
}

void writeToFile()
{
  ofstream o("P:\\programming\\C++ practicles\\pk.txt", ios::out);

  if (o.fail())
  {
    cout << "Error opening file" << endl;
  }

  string line;

  cout << "Enter what you want to write in file(enter stop for stop writing)" << endl;
  while (getline(cin, line))
  {
    if (line == "stop")
    {
      break;
    }

    o << line;
    o << endl;
  }

  o.close();
}

void readFromFile()
{
  ifstream i("P:\\programming\\C++ practicles\\pk.txt", ios::in);

  if (i.fail())
  {
    cout << "Error opening file" << endl;
  }

  string line;
  while (getline(i, line) && line != "stop")
  {
    cout << endl;
    cout << line;
  }

  i.close();
}