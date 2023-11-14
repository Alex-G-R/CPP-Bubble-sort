#include <iostream>

using namespace std;

int main()
{
    int array[10] = {9, 7, 8, 2, 1, 5, 3, 6, 4, 0};

    cout << "Before Bubble sort: \n";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i];
        if (i < 9)
            cout << ", ";
    }
    cout << endl << endl;

    // Sort the numbers
    int temp;

    // Loop through 1 less than the length of array because we are comparing it to the number after the current number
    // So we don't need to go to the last position in the array
    for (int i = 0; i < 9; i++)
    {
        // i is the current position we solve for
        // add i to not go to the last element as that element has already been moved
        for (int j = 0; j < 9 - i; j++)
        {
            // first to last [j] and [j + 1] for example [2] and [3]
            if (array[j] > array[j + 1])
            {
                // If the current is greater than the next one, swap it forward - move to the right
                temp = array[j + 1];
                array[j + 1] = array[j];
                array[j] = temp;
            }
        }
    }

    cout << "After Bubble sort: ";
    for (int i = 0; i < 10; i++)
    {
        cout << array[i];
        if (i < 9)
            cout << ", ";
    }

    cin.get();  // Wait for a key press before exiting
    return 0;
}
