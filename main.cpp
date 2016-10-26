// Name: Shayna Snyder
// Class: CS172-1
// Date: 10/25/16
// Project: HW04

#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdbool>
#include <iomanip>
#include <cmath>
#include "Rectangle2D.hpp"
#include "Course.hpp"

using namespace std;

//declares int function that returns new array with list size doubled
int* doubleCapacity(const int* list, int size);
//declares int function that finds the smallest element in an array of integers
int smallestElement(int* p, const int size);

int main()
{
    //11.1 Analyze input
    //reads an integer for array size
    int arraySize;
    cout << "Array size: ";
    cin >> arraySize;
    //declares array input[] of size arraySize
    double input[arraySize];
    //initializes the values of total and aboveAverage to 0
    double total = 0;
    int aboveAverage=0;
    //reads numbers into the array input[] and finds their sum
    for(int i=0; i<arraySize; i++)
    {
        cout << "Input " << i+1 << ": ";
        cin >> input[i];
        total = total + *(input + i);
    }
    double average;
    average = total / arraySize;
    cout << "Average input value: " << average;
    for(int j=0; j<arraySize; j++)
    {
        if(*(input+j) > average)
            aboveAverage+=1;
    }
    //outputs the amount of values in the array that are above the average
    cout << "\nNumber of input values above the average: " << aboveAverage << endl;
    
    
    
    //11.3 Increase array size
    //declares int array3 of size int size3
    int size3;
    cout << "Size for new array: ";
    cin >> size3;
    int list3[size3];
    //reads numbers into new array
    for(int j=0; j<size3; j++)
    {
        cout << "Array value " << j+1 << ": ";
        cin >>list3[j];
    }
    //creates pointer that points to array list3
    int* p3 = list3;
    //outputs new larger array by calling int* function doubleCapacity
    doubleCapacity(p3, size3);
    
    
    
    //11.5 Find the smallest element
    //declares int array array5 with elements {1, 2, 4, 5, 10, 100, 2, -22}
    const int size5=8;
    int array5[size5]={1, 2, 4, 5, 10, 100, 2, -22};
    //creates pointer that points to array array5
    int* p5 = array5;
    //outputs the array's smallest element by calling the int function smallestElement
    cout << "\nArray's smallest element: " << smallestElement(p5, size5) << endl;
    
    
    
    //11.9 Geometry: The Rectangle2D class
    //creates three Rectangle2D objects r1, r2, and r3
    Rectangle2D r1(2, 2, 5.5, 4.9);
    Rectangle2D r2(4, 5, 10.5, 3.2);
    Rectangle2D r3(3, 5, 2.3, 5.4);
    //displays r1's area and perimeter
    cout << "Area of r1: " << r1.getArea() << "\nPerimeter of r1: " <<r1.getPerimeter();
    cout << "\nr1 contains point(3,3): " << boolalpha << r1.contains(3,3);
    cout << "\nr1 contains r2: " << r1.contains(r2);
    cout << "\nr1 overlaps r3: " << r1.overlaps(r3);
    
    
    //11.13 The Course class
    
    return 0;
}

//defines int function that returns new array with list size doubled
int* doubleCapacity(const int* list, int size)
{
    //declares int variable doubleSize and initializes it to twice the size
    int doubleSize;
    doubleSize = 2*size;
    //declares doubleCapacity array of size doubleSize
    int doubleCapacity[doubleSize];
    //uses for loop to fill array
    for(int i=0; i<size;i++)
        doubleCapacity[i] = list[i];
    //uses for loop to prompt user to input the additional values
    for(int j=size; j<doubleSize; j++)
    {
        cout << "Additional value " << j+1 << ": ";
        cin >> doubleCapacity[j];
    }
    //creates pointer that points to doubleCapacity array
    int* pDouble = doubleCapacity;
    //uses for loop to ouput new array
    cout << "New larger array: ";
    for(int k=0; k<doubleSize; k++)
        cout << pDouble[k] << setw(5);
    return pDouble;
}

//defines int function smallestInteger that finds the smallest element in an array of integers
int smallestElement(int* p, const int size)
{
    //initiallizes int smallestElement to the pointer of the first element in the array
    int smallestElement;
    smallestElement = p[0];
    //uses for loop to find the smallest element in the array
    for(int i=1; i<size; i++)
    {
        //if the element is smaller than the current smallestElement value, that element replaces the value
        if(p[i]<smallestElement)
            smallestElement = p[i];
    }
    return smallestElement;
}

