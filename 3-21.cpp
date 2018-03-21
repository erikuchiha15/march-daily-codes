#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Car {
private:
	int fuelAmount;
	string brand;
	string color;
	bool wheelDrive;



public:
	void initCar(int f, string b, string c, bool w);
	void printinfo();


};

int main() {

	vector<Car>;

	Car FordF150;
	Car Black;
	Car Rando;
	Car WHY;

	FordF150.initCar(5, "Ford", "Black", false);
	Black.initCar(2, "Black", "Black", false);
	Rando.initCar(1, "Rando", "Red", true);
	WHY.initCar(35, "Why", "Red", false);

	FordF150.printinfo();
	Black.printinfo();
	Rando.printinfo();
	WHY.printinfo();




}


void Car::initCar(int f, string b, string c, bool w) {
	fuelAmount = f;
	brand = b;
	color = c;
	wheelDrive = w;

}
void Car::printinfo() {
	cout << "fuel ammount is " << fuelAmount << endl;
	cout << "Car brand is " << brand << endl;
	cout << "Your cars color is " << color << endl;
	cout << "Does your car have 4 wheel drive? " << wheelDrive << endl;

}