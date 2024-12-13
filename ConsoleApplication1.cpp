/*  Project Name: Chapter 7 Exercise 21 - 2D Operations
    File Name: ConsoleApplication1.cpp
    Programmer: Harrison Hudgins
    Date: December 5, 2024
    Requirements:
    Write a program that creates a two-dimensional array initialized with test data. Use any data type you wish. The program should have the following functions:
    • getTotal—This  function  should  accept  a  two-dimensional  array  as  its  argument  and return the total of all the values in the array.
    • getAverage—This function should accept a two-dimensional array as its argument and return the average of all the values in the array.
    • getRowTotal—This  function  should  accept  a  two-dimensional  array  as  its  first  argument  and  an  integer  as  its  second  argument.  The  second  argument  should  be  the subscript of a row in the array. The function should return the total of the values in the specified row.
    • getColumnTotal—This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a column in the array. The function should return the total of the values in the specified column.
    • getHighestInRow—This function should accept a two-dimensional array as its first argument and an integer as its second argument. The second argument should be the subscript of a row in the array. The function should return the highest value in the specified row of the array.
    • getLowestInRow—This function should accept a two-dimensional array as its first argument  and  an  integer  as  its  second  argument.  The  second  argument  should  be  the subscript of a row in the array. The function should return the lowest value in the
    Display the options in a menu to call the various functions.
*/

#include <iostream>

using namespace std;

const int height = 3;
const int length = 4;

static double getTotal(double passedArray[height][length]) {
    double totalNumber = 0;
    for (int rows = 0; rows < height; rows++) {
        for (int column = 0; column < length; column++) {
            double currentNumber = passedArray[rows][column];
            totalNumber = totalNumber + currentNumber;
        }
    }
    return totalNumber;
}

static double getAverage(double passedArray[height][length]) {
    double average = 0;

    double totalNumber = 0;
    for (int rows = 0; rows < height; rows++) {
        for (int column = 0; column < length; column++) {
            double currentNumber = passedArray[rows][column];
            totalNumber = totalNumber + currentNumber;
        }
    }
    int totalNumbers = height * length;
    average = totalNumber / totalNumbers;

    return average;
}

static double getRowTotal(double passedArray[height][length], int row) {
    double totalNumber = 0;
    for (int column = 0; column < length; column++) {
        double currentNumber = passedArray[row][column];
        totalNumber = totalNumber + currentNumber;
    }
    return totalNumber;
}

static double getColumnTotal(double passedArray[height][length], int column) {
    double totalNumber = 0;
    for (int row = 0; row < height; row++) {
        double currentNumber = passedArray[row][column];
        totalNumber = totalNumber + currentNumber;
    }
    return totalNumber;
}

static double getHighestInRow(double passedArray[height][length], int row) {
    double totalNumber = 0;
    for (int column = 0; column < length; column++) {
        double currentNumber = passedArray[row][column];
        if (totalNumber < currentNumber) totalNumber = currentNumber;
    }
    return totalNumber;
}

static double getLowestInRow(double passedArray[height][length], int row) {
    double totalNumber = 10;
    for (int column = 0; column < length; column++) {
        double currentNumber = passedArray[row][column];
        if (totalNumber > currentNumber) totalNumber = currentNumber;
    }
    return totalNumber;
}

static void chooseFunction(double array[height][length], int choice) {
    int row;

    switch (choice)
    {
    case 1:
        cout << "The total is " << getTotal(array) << endl;

        break;
    case 2:
        cout << "The average is " << getAverage(array) << endl;

        break;
    case 3:
        cout << "Enter a row # (0-2)" << endl;
        cin >> row;
        cout << "The total for row " << row << " is " << getRowTotal(array, row) << endl;

        break;
    case 4:
        int column;
        cout << "Enter a column # (0-3)" << endl;
        cin >> column;
        cout << "The total # for column " << column << " is " << getColumnTotal(array, column) << endl;

        break;
    case 5:
        cout << "Enter a row # (0-2)" << endl;
        cin >> row;
        cout << "The highest # in row " << row << " is " << getHighestInRow(array, row) << endl;

        break;
    case 6:
        cout << "Enter a row # (0-2)" << endl;
        cin >> row;
        cout << "The lowest # in row " << row << " is " << getLowestInRow(array, row) << endl;

        break;
    default:
        break;
    }
}

int main() {
    int choice;
    double array[height][length] = { {4, 8, 1, 3}, {6, 4 ,5, 9}, {10, 3, 2, 6} };

    cout << "Pick a number associated from the following functions (1-6) \ngetTotal: 1 \nGetAverage: 2 \nGetRowTotal: 3 \nGetColumnTotal: 4 \nGetHighestInRow: 5 \nGetLowestInRow: 6\n";
    cin >> choice;

    chooseFunction(array, choice);
}
