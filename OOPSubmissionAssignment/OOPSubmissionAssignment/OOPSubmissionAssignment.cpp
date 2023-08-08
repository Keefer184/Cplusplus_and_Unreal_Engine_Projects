using namespace std;

#include <iostream>

class Dog {
public:
    string breed;
    string color;
    double height; //In inches - 12in = 1ft
    double weight; //In pounds (lbs)

    Dog(string x, string y, double z, double a) {
        breed = x; 
        color = y;
        height = z;
        weight = a;
    }

    void Shake() {
        cout << "The dog extends its paw to shake." << endl;
    }

    void Sit() {
        cout << "The dog rests on its hind legs to sit." << endl;

    }

    void LayDown() {
        cout << "The dog lowers all four legs and rests its belly on the ground to lay down." << endl;
    }
};

int main()
{
    Dog hound("Hound", "Brown", 24.0, 60.0);
    cout << "This is a " << hound.breed << " with fur color " << hound.color << ", and it weighs " << hound.weight << " lbs while standing " << hound.height << " inches tall." << endl;
    hound.Shake();
    hound.Sit();
    hound.LayDown();
    return 0;
}


