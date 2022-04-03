#include <iostream>

using namespace std;

//Function Prototypes
void GetDayNumber(int&);
void DisplayDay(int);


int main()
{
   int dayNum;
   GetDayNumber(dayNum);
   DisplayDay(dayNum);

   cout <<"Young Coder";
   system("pause");
   return 0;

}

void GetDayNumber(int& number )
{
   cout << "Enter a number between 1 and inclusive.\n";
   cin >> number;

   while (number<1 && number >7)
   {
     cout << number << " is not between 1 and 7 inclusive.\n";
     cout << "Try again. Enter a number between 1 and 7: ";
     cin >> number;
   }


}

void DisplayDay(int number)
{
  if (number == 1)
  {
     cout << "Day"<< number <<"Is a Sunday.";
  }

  else if (number == 2)
  {
     cout << "Day" << number << "Is a Monday.";
  }

  else if (number == 3)
  {
     cout << "Day" << number << "Is a Tuesday.";
  }

  else if (number == 4)
  {
     cout << "Day" << number << "is a Wednessday.";

  }

  else if (number == 5)
  {
      cout<<"Day"<< number << "Is a Thursday.";
  }

  else if (number == 6)
  {
      cout << "Day" << number <<" Is a Friday.";
  }

  else if (number == 7)
  {
      cout << "Day" << number << " Is a Saturday.";
  }
}
