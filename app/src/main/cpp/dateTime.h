//
// Created by Akshat Bajpai on 7/14/21.
//

#ifndef SAMPLEC_DATETIME_H
#define SAMPLEC_DATETIME_H

#endif //SAMPLEC_DATETIME_H
#include<iostream>
#include<ctime>
#include<string>

using namespace std;

//string getDate(){
//    time_t now = time(0)
//}

string getDateTime(){
    time_t now = time(0);
    string dt = ctime(&now);
    return dt;
}