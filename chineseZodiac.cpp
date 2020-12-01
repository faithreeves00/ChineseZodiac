// Chinese Zodiac - determine the Chinese Zodiac sign based on the year

#include <iostream>

using namespace std;

int main()
{
   // prompt user to enter a year
   cout << "Enter a year: ";
   
   // declare variable to store year
   int year;
   
   // read in users input
   cin >> year;

   // if the user did NOT input an integer, execute if statement
   if (!isdigit(year)) {

      // output error message
      cout << "You did not enter an integer. Exiting program.";

      // exit program
      return 1;
   }
   
   // calculate and output correct zodiac sign
   switch (year % 12)
   {
      case 0: cout << "monkey" << endl; break;
      case 1: cout << "rooster" << endl; break;
      case 2: cout << "dog" << endl; break;
      case 3: cout << "pig" << endl; break;
      case 4: cout << "rat" << endl; break;
      case 5: cout << "ox" << endl; break;
      case 6: cout << "tiger" << endl; break;
      case 7: cout << "rabbit" << endl; break;
      case 8: cout << "dragon" << endl; break;
      case 9: cout << "snake" << endl; break;
      case 10: cout << "horse" << endl; break;
      case 11: cout << "sheep" << endl; break;  
   }
   
   return 0;  
}