#include <iostream>

#include"arraytest.h"
#include <string>
 // Lecture notes codes for Week 3 lectures
using std::string;
using std::cin;
using std::cout;
using std::endl;


int main() {

    int lockerCombo[] ={35, 24, 17};
    std::cout << lockerCombo << std::endl; // 1,  the base address is stored the array name lockerCombo
// So what is the correct way to print every element for array???

 for(int i=0; i<3;i++){
     std::cout << lockerCombo[i] << std::endl;
 }

// Good practice on array initializaiton/ Create an array for names and ages of your team
// three different initialization methods #1 by array values ; # 2 by size; # 3 by both value and size
std::string names[] = {"Evan","Serdar","Rachel","Yankang","Beth", "Bart", "Vidya"};
 int ages[] ={25, 30,22, 29, 26,28,19};


// pass array as a function parameter. For example, the linear search function we did before
//const int MAX_SIZE =5;
//float numbers[MAX_SIZE];
//
//for (int i=0; i< MAX_SIZE; i++)
//{
//    std::cout << "Enter number:";
//    std::cin >> numbers[i];
//}
// rewrite lines above into a  ReadArray function,
// the purpose is to be familar with passing an array into function

    const int MAX_SIZE =5;
    int numbers[MAX_SIZE];
    ReadArray(numbers,MAX_SIZE);


// Write individual Function to find the max, min, mean,
   int max= Max(numbers, MAX_SIZE);
   int min= Min(numbers, MAX_SIZE);
   float mean = Mean(numbers, MAX_SIZE);


// Higher level challenge, Find the median - sort the array, find the "middle" one
// hints: std::sort(array,array+size) is useful (include <algorithm>)
   int median = Median(numbers, MAX_SIZE);

   // test out all the functions
   cout<< "Max in the array: "<<max<<endl;
    cout<< "Min in the array: "<<min<<endl;
    cout<< "Mean in the array: "<<mean<<endl;
    cout<<"Median in the array: "<<median<<endl;

   // output current array and see whether the order has already been changed by sort function
    cout << "array after sort:";
   for(int i=0; i<MAX_SIZE;i++)
   {
       cout << numbers[i] << " ";

   }
   cout <<endl;

// parallel array practice


// Output names of people whose age is within the “delta” of the specified “value” (i.e.
//    the absolute value of difference between their age and “value” is < “delta”)
// Param: parallel arrays “names” and “data” each of length “size”, “value”, and “delta”
// Returns: nothing

   cout<<"close-age person:" <<endl;

    OutputNamesCloseTo(names,ages,7,25,5);


// what are the names of oldest person?
// void OldestPersonName (const string names[], const int ages[], int size)
// Returns: nothing

    cout<<"oldest person:" <<endl;

    OldestPersonName(names,ages,7);

 double A[] = {15, 10, 45, 30};
 double b = avgwithoutlowest(A,4);
 cout << "avgwithoutlowest:"<<b<< endl;


    return 0;
}


