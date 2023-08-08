
using namespace std;
#include <iostream>
#include <string>
#include <cmath>

//int AddFunction(int &x, int &y){
//    return x + y;
//}
//
//double AddFunction(double x, double y) {
//    return x + y;
//}
//
//void NameAge(string name = "Matt", int age = 37) {
//    cout << name << " , " << age << endl;
//}
//
//class Heroes {
//public:
//    string name;
//    string weapon;
//    int level;
//    void DisplayInfo() {
//        cout << name << "is a hero who wields a " << weapon << " and starts at level " << level << ".\n";
//    }
//    void LevelUp();
//};
//
//void Heroes::LevelUp() {
//    level++;
//    cout << name << " is now level " << level << ".\n";
//}
//
//class Alternates {
//public:
//    string name;
//    string weapon;
//    int level;
//    Alternates(string x, string y, int z);
//};
//
//Alternates::Alternates(string x, string y, int z) {
//    name = x;
//    weapon = y; 
//    level = z;
//}
//
//class BusterSword {
//private:
//    int power;
//
//public: 
//    void setPower(int pow) {
//        power = pow;
//    }
//    
//    int getPower() {
//        return power;
//    }
//};

////Base Class
//class Heroes {
//public:
//    string name;
//    string weapon;
//
//protected:
//    int level;
//};
//
//class Villains {
//public:
//    string villianname;
//protected:
//    string questLocation;
//};
//
//class Alternates: public Heroes, public Villains{
//public:
//    void setLevel(int l) {
//        level = l;
//    }
//    int getLevel() {
//        return level;
//    }
//};
//
//class SideChars: public Alternates{
//public:
//    void setLocation(string loc) {
//        questLocation = loc;
//    }
//    string getLocation() {
//        return questLocation;
//    }
//
//};

//class Car {
//public:
//    void CarSound() {
//        cout << "The sound the engine makes is whn nn nnn nnn";
//    }
//};
//
//class Racer : public Car {
//public:
//    void CarSound() {
//        cout << "The sound the engine makes is VRM VRRRRMMMMM VRRRRMMMMMMMMMMM";
//    }
//};
//
//class Electric :public Car {
//public:
//    void CarSound() {
//        cout << "This engine makes no sound...";
//    }
//};

int main()
{
    try {
        int age=18;
        if (age >= 21) {
            cout << "You may purchase alcohol from this establishment";
        }
        else {
            throw (age);
        }
    }
    catch (int attemptedAge) {
        cout << "Sale denied, you must be at least 21 to purchase alchol." << endl;
        cout << "Your age is: " << attemptedAge << endl;
    }

    //Car regCar;
    //Racer raceCar;
    //Electric electricCar;

    //regCar.CarSound();
    //raceCar.CarSound();
    //electricCar.CarSound();


    //Alternates caitSith;
    //caitSith.name = "Cait Sith";
    //caitSith.villianname = "Reeve";
    //caitSith.setLevel(99);

    //SideChars yuffie;
    //yuffie.name = "Yuffi Kisaragi";
    //yuffie.weapon = "Shuriken";
    //yuffie.setLocation(" forest outside of Junon ");

    //cout << caitSith.name << " and " << yuffie.name << " are characters who you can obtain in FFVII.\n" << caitSith.villianname << " can reach level " << caitSith.getLevel() << ".\n" << yuffie.name << " can be found at " << yuffie.getLocation() << endl;

    //BusterSword buster;
    //buster.setPower(100);
    //cout << buster.getPower() << endl;

    //Alternates tifa ("Tifa", "Knuckles", 11);
    //Alternates aerith ("Aerith", "Staff", 15);

    //cout << tifa.name << " and " << aerith.name << " are permanent characters who provide support to the main character." << endl;


    //Heroes cloud;
    //cloud.name = "Cloud Strife";
    //cloud.weapon = "Buster Sword";
    //cloud.level = 7;

    //Heroes squall;
    //squall.name = "Squall Lionheart";
    //squall.weapon = "Gun Blade";
    //squall.level = 8;

    //cout << cloud.name << " is a hero who wields a " << cloud.weapon << " and starts at level " << cloud.level << endl;
    //cout << squall.name << " is a hero who wields a " << squall.weapon << " and starts at level " << squall.level << endl;
    
    //cloud.DisplayInfo();
    //squall.DisplayInfo();

    //cloud.LevelUp();

    //int firstNum = 10;
    //int secondNum = 8;
    //int z = AddFunction(firstNum, secondNum);
    //cout << z << endl;

    //double y = AddFunction(3.14, 2.828);
    //cout << y << endl;

    //NameAge();
    //NameAge("Jim", 24);
    


    //const int favNum = 184;
    //string itIs = "It is ";
    //bool isTrue = false;
    //string favoriteNum = " my favorite number is ";
    //double num1 = 10;

    //if (isTrue == true) {
    //    cout << itIs << "true " << favoriteNum << favNum;
    //}
    //else {
    //    cout << itIs << "false " << favoriteNum << num1;
    //}

    //const int favNum = 184;
    //double num1;
    //cout << "Guess my favorite number?" << endl;
    //cin >> num1;
    //if (favNum == num1) {
    //    cout << "Congratulations, you have guessed my favorite number!" << endl;

    //}
    //else {
    //    cout << "Sorry, but that is not my favorite number, guess again." << endl;
    //}
   // float price = 19.99;
   // string fName = "Matt";
   // string lName = " Keefer";
   // string fullName = fName.append(lName);
   ///* cout << fullName << " paid " << price << " for his tickets." << endl;*/

   // cout << "My full name has " << fullName.length() << " characters in it." << endl;
   // cout << "I go by " << fullName << endl;
   // fullName[5] = 'R';
   // cout << "Yet sometimes kids would joke and call me " << fullName;

    /*double a = 11;
    const double b = 7;*/
    //cout << a + b << endl;
    //cout << a - b << endl;
    //cout << a * b << endl;
    //cout << a / b << endl;
    //a++;
    //cout << a << endl;
    //cout << (a < b) << endl;
    //cout << (a == b) << endl;
    //cout << (a != b) << endl;
    //cout << (a <= b) << endl;
    //a = b;
    //a += b;
    //int d = 5;
    //d &= 3;
    //d <<= 3;
   // cout << d << endl;
    //if (a > d && b > d) {
    //    cout << "a > d and b >d" << endl;
    //}
    //else {
    //    cout << "The conditionals are not both true." << endl;

    //}
    //if (a < d || b < d) {
    //    cout << "a < d or b < d" << endl;
    //}
    //else {
    //    cout << "Neither conditionals are true." << endl;

    //}

    /*if (a != b) {
        cout << "a and b are not the same value" << endl;
    }*/

    /*string fullName;
    cout << "Type your full name please: ";
    getline(cin, fullName);
    cout << "Thank you " << fullName << " welcome to HELL!";*/

    //int x = 10;
    //int y = 184;
    //cout << max(x, y) << endl;
    //double z = sqrt(y);
    //cout << z << endl;
    //cout << round(z) << endl;
    //cout << pow(x, y) << endl;

    //if (x < y) {
    //    cout << "x is less than y" << endl;
    //}
    //else if (x > y){
    //    cout << "x is greater than y" << endl;

    //}
    //else {
    //    cout << "IDK, something happened..." << endl;
    //}

    //bool isLess = (x < y);
    //switch (isLess) {
    //case 1:
    //    cout << "x is less than y";
    //    break;
    //case 0:
    //    cout << "x is greater than y";
    //    break;
    //default:
    //    cout << "IDK, x and y are related somehow...";
    //}

    /*string result = (x < y) ? "x is less than y." : "x is greater than y.";
    cout << result;*/

    //while (x < y) {
    //    cout << x << endl;
    //    x++;
    //}

    //do {
    //    cout << y << endl;
    //    y--;

    //} while (x < y);

    //for (int i = 0; i < y; i++) {
    //    x+=i;
    //    cout << x << endl;
    //}

    //while (x < y) {
    //    cout << x << endl;
    //    x++;
    //    if (x == 100) {
    //        cout << "This is kind of ridiculous, huh?"<<endl;
    //        continue;
    //    }
    //    if (x == 180) {
    //        cout << "That's it, I'm done...";
    //        break;
    //    }

    //}

    //string heroes[3] = { "Cloud", "Tifa", "Aerith" };
    /*cout << heroes[0];*/
    //for (int i = 0; i < 3; i++) {
    //    cout << heroes[i] << endl;
    //}

    //for (string hero : heroes) {
    //    cout << hero << endl;
    //}

    //int x = 184;
    //int* ptr = &x;
    /*int& y = x;
    cout << x << endl;
    cout << y << endl;*/

    //cout << &x << endl;
    //cout << ptr << endl;
    //cout << *ptr << endl;

    
    return 0;
}




