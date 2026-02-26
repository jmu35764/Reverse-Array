// Reverse Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
//#include <random>

int* ReverseArray(const int arr[], int size);

int main()
{
    //std::cout << "Hello World!\n";
    // Create random number generator for numbers 1-15
    //std::random_device rd("default");

    //std::uniform_int_distribution uid(1, 15);
    const int SIZE = 5;
    const int array[SIZE] = { 1,2,3,4,5 };
    //int rev_array[];
    //int i;
   // int j;
    
    // Fill an array
    /*for (i = 0; i < SIZE; i++)
      {
          std::cin >> array[i];
      }*/
    std::cout << "Code is running" << std::endl;

    int *rev_array = ReverseArray(array, SIZE);

    // Code to put array in reverse order
    /*for (j = 0; j < SIZE; j++)
    {
        rev_array[j] = array[4 - j];
    }*/

    for (int k = 0; k < SIZE; k++)
    {
        std::cout << std::setw(4) << array[k] << std::setw(4) << rev_array[k] << std::endl;
    }

    delete[] rev_array;
}

int* ReverseArray(const int arr[], int size)
{
    int* revarry = new int[size];

    for (int j = 0; j < size; j++)
    {
        revarry[j] = arr[size-1 - j];
    }

    return revarry;
}
// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
