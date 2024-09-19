#ifndef FISH_H
#define FISH_H
#include <iostream>
#include <vector>
using namespace std;

struct Fish
{
    public:
    string name;
    int gallons_required;

    Fish(string _name, int _gallons_required){
        name = _name;
        gallons_required = _gallons_required;
    }
};
#endif