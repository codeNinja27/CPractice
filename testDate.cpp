#include <iostream>

using namespace std;

class Date
{
    int day;
    int month;
    int year;

    void checkFormat(int&);
    void validate();
    
    public:
    bool good;

    void getData();
    void display();
};

void Date::getData()
{
    checkFormat(month);

    if (good)
    {
      checkFormat(day);

      if (good)
      {
        checkFormat(year);

        if (good)
        {
          // Format is OK
          validate();
        }
      }
    }
}

void Date::checkFormat(int &inputInt)
{
    char input = 0;
    string myValue = "";
    bool done = false;

    good = true;

    do
    {
      input = cin.get();

      if (input != ' ' && input != '\n')
      {
          if (input < '0' || input > '9')
            good = false;
          else
            myValue += input;
      }
      else
        done = true;

    } while (!done && good);

    if (good)
    inputInt = atoi(myValue.c_str());
}

void Date::validate()
{
    good = false;

    if(month == 1) {
      if((day > 0 || day < 32) && (year > 0)) {
        good = true;
      }
    }
    if(month == 2) {
      if((day > 0 || day < 29) && (year > 0)) {
        good = true;
      }
    }
    if(month == 3) {
      if((day > 0 || day < 32) && (year > 0)) {
        good = true;
      }
    }
    if(month == 4) {
      if((day > 0 || day < 31) && (year > 0)) {
        good = true;
      }
    }
    if(month == 5) {
      if((day > 0 || day < 32) && (year > 0)) {
        good = true;
      }
    }
    if(month == 6) {
      if((day > 0 || day < 31) && (year > 0)) {
        good = true;
      }
    }
    if(month == 7) {
      if((day > 0 || day < 32) && (year > 0)) {
        good = true;
      }
    }
    if(month == 8) {
      if((day > 0 || day < 32) && (year > 0)) {
        good = true;
      }
    }
    if(month == 9) {
      if((day > 0 || day < 31) && (year > 0)) {
        good = true;
      }
    }
    if(month == 10) {
      if((day > 0 || day < 32) && (year > 0)) {
        good = true;
      }
    }
    if(month == 11) {
      if((day > 0 || day < 31) && (year > 0)) {
        good = true;
      }
    }
    if(month == 12) {
      if((day > 0 || day < 32) && (year > 0)) {
        good = true;
      }
    }
  
  // Your code here. Per the assignment, make sure the month is between 1 and 12,
  // the day is within the corresponding month (You can do 1-28 for February),
  // and the year is positive (although this should have been caught in checkFormat() anyway....)
}

void Date::display()
{
    cout << month << "-" << day << "-" << year;
}

int main()
{
    Date today;
    cout << "Please enter a date: ";
    today.getData();

    if (today.good)
    {
      cout << "You entered: ";
      today.display();
      cout << endl;
    }
    else
      cout << "You used the wrong format to enter the date." << endl;

    return 0;
}
