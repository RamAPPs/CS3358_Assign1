#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    int number;
    char again;
    cout << "Welcome to My APP.\nThis App accepts an integer from the keyboard."
         << "\nThe App Calculates and Displays the Following  :\n\n1. Assuming "
         << "that the integer represents a $$ amount, then\n   the number of "
         << "quarters, dimes, nickels, and pennies\n   will be calculated and "
         << "displayed\n\n2. Assuming that the integer represents person's Age "
         << "in years then,\n   Number of months, days, hours, minutes, and "
         << "seconds for the person\n   will be calculated and displayed\n\n3."
         << " The numbers will be separated into its individual digits.\n   "
         << "Then each digit of the integer will be displayed in English\n\n4."
         << " Indicate whether or not the integer is an arm strong number.\n\n"
         << "5. The factorial of the integer will be calculated and displayed."
         << "\n\n6. Indicate whether or not the integer is prime. Then,\n   "
         << "All the prime numbers between 1 and that number will also be\n   "
         << "displayed\n\n7. The hailstone sequence starting at n will be "
         << "calculated and\n   displayed.\n";

    do{
        cout << "\nEnter a Positive integer Number > 0 and < 200 --->  ";
        cin >> number;
//        if(cin.fail())
//        {
//            cout << "Error *** Incorrect input - You entered a character\n"
//                 << "Enter a Positive Integer\n";
//
//        }
        if(number <= 0 || number >= 200)
        {
            cout << "\nError *** Number must be > 0 and < 200\n\nWould you like"
                 << " to try for another number ?\nEnter y || Y for yes or n ||"
                 << " N for no --->  ";
            cin >> again;
            while(again != 'y'&& again != 'Y' && again != 'n' && again != 'N')
            {
                cout << "\nError *** Invalid choice - Must be Y || y || N || n"
                     << "\n\nWould you like to try for another number ?\n"
                     << "Enter y || Y for yes or n || N for no --->  ";
                cin >> again;

            }
            continue;
        }
        //7 functions
        cout << "\nWould you like to try for another number ?\n"
             << "Enter y || Y for yes or n || N for no --->  ";
        cin >> again;
        while(again != 'y'&& again != 'Y' && again != 'n' && again != 'N')
        {
            cout << "\nError *** Invalid choice - Must be Y || y || N || n"
                 << "\n\nWould you like to try for another number ?\n"
                 << "Enter y || Y for yes or n || N for no --->  ";
            cin >> again;
        }
    }while(again == 'Y' || again == 'y');

    cout << "\nThis APP is developed By Ben Hunt and Oscar Ramones\nJanuary 20"
         << " - 2017";

    return 0;
}
