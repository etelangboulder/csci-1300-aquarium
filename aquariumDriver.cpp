#include <iostream>
#include "Aquarium.cpp"
using namespace std;

int main() {
    Aquarium aqua = Aquarium();
    aqua.setAquaristName("Ethan");
    cout << aqua.getAquaristName() << endl;
    cout << aqua.loadFish("fish_example.txt") << endl;
    cout << aqua.getGallonsUsed() << endl;
    aqua.setGallonsUsed(100);
    cout << aqua.getGallonsUsed() << endl;
    cout << aqua.removeFish("Jack Dempsey Cichlid") << endl;
    cout << aqua.removeFish("Black Koi") << endl;
    cout << aqua.getGallonsUsed() << endl;


    return 0;
}