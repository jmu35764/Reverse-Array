// Reverse Array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
//#include <random>

int* ReverseArray(const int arr[], int size);
void print(const int arr[], int size);

// The purpose of this functon is to populate an array 
// and then dynamcially allocate memory for a second array
// that has the same value as first but in reverse oder
int main()
{
    //Setting size for array
    const int SIZE = 5;

    //FIlling the array
    const int array[SIZE] = { 1,2,3,4,5 };

    //Uses the ReverseArray function to dynamically
    //allocate the memory for the reverse array
    int *rev_array = ReverseArray(array, SIZE);

    
    std::cout << "Original Array" << std::endl;
    print(array, SIZE);

    std::cout << std::endl << "Reversed Array" << std::endl;
    print(rev_array, SIZE);

    //Deallocate memory for the reverse array
    delete[] rev_array;

}

//Returns int pointer for the reverse array
int* ReverseArray(const int arr[], int size)
{
    //Dynamically Allocates memory for the rariable revarray

    int* revarry = new int[size];

    
    //Populates values for revarry with reverse values of
    //the initial array
    for (int j = 0; j < size; j++)
    {
        revarry[j] = arr[size-1 - j];
    }

    return revarry;
}

void print(const int arr[], int size)
{
    //Prints out the values of the array
    for (int k = 0; k < size; k++)
    {
        std::cout << std::setw(4) << arr[k] << std::endl;
    }
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
