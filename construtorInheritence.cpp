#include <iostream>
#include <string>
using namespace std;

class Flower {
protected:
    string color;

public:
    Flower(const string& c) : color(c) {}

    void bloom() {
        cout << "The flower is blooming in " << color << " color." << endl;
    }
};

class Rose : public Flower {
public:
    Rose(const string& c) : Flower(c) {}

    void fragrance() {
        cout << "The rose emits a sweet fragrance." << endl;
    }
};

int main() {
    Rose redRose("red");
    redRose.bloom();      // Inherited from Flower
    redRose.fragrance();  // Unique to Rose

    return 0;
}
