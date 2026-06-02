#include <iostream>
using namespace std;

int main()
{
    int size = 0;
    float *Marks = NULL;
    int i = 0; // loop counter

    cout << "Enter No, of elements:\n";
    cin >> size;

    // Dynamic memory allocation
    Marks = new float[size];

    cout << "enter your marks\n";

    // Iteration
    // steps  1.  2.  3.
    for (i = 0; i < size; i++)
    {
        cin >> Marks[i]; // 4
    }

    cout << "Entered marks are\n"; // 5

    // steps  1.  2.  3.
    for (i = 0; i < size; i++)
    {
        cout <<Marks[i]<<"\n"; // 6
    }

    delete []Marks;

    return 0;
}