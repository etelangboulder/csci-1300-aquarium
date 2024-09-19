#ifndef AQUARIUM_H
#define AQUARIUM_H
#include <iostream>
#include <vector>
#include "Fish.h"
using namespace std;

class Aquarium
{
    // data member
    private:  
        string _aquarist_name;
        int _gallons_used;
        vector<Fish> _fish;

    public:
        Aquarium();
        Aquarium(string);

        string getAquaristName() const;
        int getGallonsUsed() const;

        void setAquaristName(string);
        void setGallonsUsed(int);
        bool loadFish(string);
        bool removeFish(string);
};
#endif