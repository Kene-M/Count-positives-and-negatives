/*

    This program will read the user's desired number of integers and determine
    whether they are positive or negative and calculate their total and average.


1. Initialize the counter variables (set the # of entries to be -1 so as to not include 0 as an entry).
2. Assign a value that is not 0 to integer so that it can enter the while loop.
3. Check if the integer entered is not 0 (while loop).
        If true:
            Ask the user to enter an integer.
            Check if the integer is positive.
                Increment the number of positive entries.

            Check if the integer is negative.
                Increment the number of negative entries.

            Add the entered integer to the accumulator in each iteration.
            Increment the number of times the user enters an integer in each iteration.

4. Calculate the average of the numbers entered.
5. Display the results to the user.

*/


// This program will read the user's desired number of integers and determine
// whether they are positive or negative and calculate their total and average.

#include <iostream>

using namespace std ;

int main()
{
        // Declare variables.
    int integer ;  // The integer derived from the user.
    int numPositives = 0 ;  // The number of positive integers the user enters.
    int numNegatives = 0 ;  // The number of negative integers the user enters.
    int numEntries = -1 ;  // The number of integers the user enters.
    double total = 0.0 ;  // The subtotal of the user's integers.
    double average ;  // The average of the user's integers.

        // Assign a value to integer so that it can enter the while loop.
    integer = 1 ;

        // Check if the integer entered is not 0.
    while ( integer != 0 )
    {
            // Ask the user to enter an integer.
        cout << "Enter an integer, the input ends if it is 0: " ;
        cin >> integer ;

            // Check if the integer is positive.
        if ( integer > 0 )
        {
                // Increment the number of positive entries.
            numPositives++ ;
        }

            // Check if the integer is negative.
        else if ( integer < 0 )
        {
                // Increment the number of negative entries.
            numNegatives++ ;
        }

            // Add the entered integer to the accumulator in each iteration.
        total += integer ;

            // Increment the number of times the user enters an integer in each iteration.
        numEntries++ ;
    }

        // Calculate the average of the numbers entered.
    average = total / numEntries ;

    // Display the results to the user.

        // Display the number of positive entries to the user.
    cout << "The number of positives is " << numPositives << endl ;

        // Display the number of negative entries to the user.
    cout << "The number of negatives is " << numNegatives << endl ;

        // Display the total of all the entries (integers) to the user.
    cout << "The total is " << total << endl ;

        // Display the average of all the entries (integers) to the user.
    cout << "The average is " << average << endl ;

    return 0 ;
}

/*

    RUN 1: integer = 0.

Enter an integer, the input ends if it is 0: 0
The number of positives is 0
The number of negatives is 0
The total is 0
The average is nan

* nan means "Not a Number", gotten because 0/0 is calculated.

    ----------------------------------------------------

    RUN 2: integer = 3, 2, 1, 0.

Enter an integer, the input ends if it is 0: 3
Enter an integer, the input ends if it is 0: 2
Enter an integer, the input ends if it is 0: 1
Enter an integer, the input ends if it is 0: 0
The number of positives is 3
The number of negatives is 0
The total is 6
The average is 2

    ----------------------------------------------------

    RUN 3: integer = 25, 34, -89, 72, -35, -67, 21, 48, 0

Enter an integer, the input ends if it is 0: 25
Enter an integer, the input ends if it is 0: 34
Enter an integer, the input ends if it is 0: -89
Enter an integer, the input ends if it is 0: 72
Enter an integer, the input ends if it is 0: -35
Enter an integer, the input ends if it is 0: -67
Enter an integer, the input ends if it is 0: 21
Enter an integer, the input ends if it is 0: 48
Enter an integer, the input ends if it is 0: 0
The number of positives is 5
The number of negatives is 3
The total is 9
The average is 1.125

*/
