/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: agonzalez
 *
 * Created on September 14, 2017, 11:05 PM
 */

#include <iostream>

using namespace std;

int main(void)
{
int  vector[] = { 3, -5, 7, 10, -4, 14, 5, 2, -13 };
int n = sizeof(vector) / sizeof(vector[0]);
/*this block of code sets the pointer to the array. Then the for loop checks the content of the array to see if it is lower than the current low number.
 if so it will set the new low number to the small variable. Then the pointer is pushed over to the next element in the array and it repeats the process.*/

int *Ptr = vector;
int small = *Ptr;
for(int i = 0; i< n; i++)
{
    if(small > *Ptr)
    {
        small = *Ptr;
    }
    Ptr++;
}

cout << small;
return 0;
}