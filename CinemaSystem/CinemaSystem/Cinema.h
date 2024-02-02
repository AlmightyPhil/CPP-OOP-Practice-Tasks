#pragma once

#include <string>
#include <vector>
#include "Hall.h"

using namespace std;

class Cinema
{
public:

    Cinema(string, string);
    Cinema(string, string, vector<Hall>);
    void setName(string);
    string getName();
    void setAddress(string);
    string getAddress();
    void setHallsList(vector<Hall>);
    vector<Hall> getHallsList();
    void addHallToList(Hall);
    //void addVectorOfHallsToList(vector<Hall>);
    void print();

private:

    string name;
    string address;
    vector<Hall> hallsList;

};