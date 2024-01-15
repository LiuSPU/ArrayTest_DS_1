//
// Created by liul5 on 1/15/2024.
//

#ifndef ARRAYTEST_ARRAYTEST_H
#define ARRAYTEST_ARRAYTEST_H
#include <string>
using std::string;

int Max(const int data[], int size);
int Min(const int data[], int size);
float Mean(const int data[],int size);
double Median( int data[],int size);
void ReadArray(int data[], int size);
double avgwithoutlowest(double data[], int size);
void OutputNamesCloseTo(const string names[], const int ages[], int size, int value, int delta);
void OldestPersonName (const string names[], const int ages[], int size);


#endif //ARRAYTEST_ARRAYTEST_H
