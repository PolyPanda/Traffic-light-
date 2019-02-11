//
//  main.cpp
//  Traffic Light
//
//  Created by Andie Yu on 6/2/17.
//  Copyright © 2017 Andie Yu. All rights reserved.
//

#include<iostream>

using namespace std;

#include <stdio.h>
#include <time.h>

void fiftyseconds()
{
    time_t start;
    time_t current;
    time(&start);
    do
    {
        time(&current);
    }
    while(difftime(current,start) < 5.0);
}

void twoseconds()
{
    time_t start;
    time_t current;
    time(&start);
    do
    {
        time(&current);
    }
    while(difftime(current,start) < 2.0);
}

void lightUp()
{
    cout<<"Green light up"<<endl;
    fiftyseconds();
    cout<<"Yellow light up"<<endl;
    twoseconds();
    cout<<"Red light up"<<endl;
    fiftyseconds();
}

int main()
{
    cout<<"This is the traffic light !"<<endl;
    while(1)
        lightUp();
    return 0;
}
