//
// Created by liul5 on 1/15/2024.
//

#include "arraytest.h"
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

// find the Max number in the array
int Min(const int data[], int size){
    int minValue;

    minValue = data[0];
    for (int i = 1; i < size; i ++)
    {
        if (data[i] < minValue)
            minValue = data[i];
    }
    return minValue;
}
// find the Max number in the array
float Mean(const int data[],int size){
    int totalValue=0;
    for (int i = 0; i < size; i ++)
    {
        totalValue += data[i];
    }
    return (totalValue/size);
}
// find the Median number in the array
double Median( int data[],int size){
    std::sort(data, data + size);
    int median;
    if (size % 2 == 0) {
        int mid = size/ 2;
        median = (data[mid - 1] + data[mid]) / 2;
    } else {
        median = data[size/ 2];
    }

    return median;
}
// ReadArray elements
void ReadArray(int data[], int size){
    for (int i=0; i< size; i++)
    {
        std::cout << "Enter number:";
        std::cin >> data[i];
    }
}

// Output names that close enough(<delta) to certain value
void OutputNamesCloseTo(const string names[], const int ages[], int size, int value, int delta){

    for (int i = 0; i < size; i ++)
    {
        if (abs(ages[i]-value) < delta )
            cout << names[i] << endl;
    }

}

// what are the names of oldest person?
void OldestPersonName (const string names[], const int ages[], int size){
    int Max_age = Max(ages, size);
    for (int i = 0; i < size; i ++){
        if (ages[i]==Max_age)
            cout << names[i]<<endl;
    }
}

// find the Max number in the array
int Max(const int data[], int size) {
    int maxValue;

    maxValue = data[0];
    for (int i = 1; i < size; i ++)
    {
        if (data[i] > maxValue)
            maxValue = data[i];
    }
    return maxValue;
}

// average without lowest number
double avgwithoutlowest(double data[], int size){
    double sum = 0;
    double minData=data[0];

    for(int i=0; i< size; i++){
        sum += data[i];
        if(data[i]< minData)
            minData = data[i];
    }
    return (sum-minData)/(size-1);
}