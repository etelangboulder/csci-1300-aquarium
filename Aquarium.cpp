#include <iostream>
#include "Aquarium.h"
#include <fstream>
#include <sstream>
using namespace std;

// default constructor
Aquarium::Aquarium()
{
    _aquarist_name = "";
    _gallons_used = 0;
}

// parameterized constructor
Aquarium::Aquarium(string name)
{
    _aquarist_name = name;
}

// getter for name
string Aquarium::getAquaristName() const
{
    return _aquarist_name;
}

// getter for gallons
int Aquarium::getGallonsUsed() const
{
    return _gallons_used;
}

// setter for name
void Aquarium::setAquaristName(string name)
{
    _aquarist_name = name;
}

// setter for gallons
void Aquarium::setGallonsUsed(int gallons)
{
    _gallons_used = gallons;
}

// loading fish file
bool Aquarium::loadFish(string file_name)
{
    string line;
    string name;
    string gallons;
    int g;
    ifstream file(file_name);
    if (file.is_open())
    {
        while (getline(file, line))
        {
            stringstream ss(line);
            getline(ss, name, ',');
            getline(ss, gallons);
            g = stoi(gallons);
            _gallons_used += g;
            Fish fish(name, g);

            _fish.push_back(fish);
        }
        
        return 1;
    }
    else
    {
        return 0;
    }
}

// removing fish file
bool Aquarium::removeFish(string fish_name)
{
    for(int i = 0; i < _fish.size(); i++){
        if(_fish[i].name == fish_name){
            _fish.erase(_fish.begin() + i);
            _gallons_used -= _fish[i].gallons_required;
            return true;
        }
    }
    return false;
}