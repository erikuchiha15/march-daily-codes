#include <iostream>
using namespace std;

char foodDrop(char location);

class pokemon {
private:
	int HP;

public:
	void eat(char c);
	void initPokemon(int num);
	void printData();
	

};

int main() {
	pokemon Togekiss;
	Togekiss.initPokemon(5);
	while (1) {
		Togekiss.printData();
		Togekiss.eat(foodDrop('d'));//eventually call food drop here
		Togekiss.printData();
		system("pause");
	}

}

//function definitions
void pokemon::eat(char food){
	if (food == 'b') {
		cout << "you ate a berry and got 4 hp" << endl;
		HP += 4;
	
	
	}
	else if (food == 'm') {
		cout << "you ate a mushroom and got 7 hp" << endl;
		HP += 7;
	}
	else if (food == 'f') {
		cout << "you ate a fruit and got 70 hp" << endl;
		HP += 70;
	}
	else if (food == 'c') {
		cout << "you ate a cheese and got 0 hp" << endl;
		HP += 0;
	}
	//keep working here!

}


void pokemon::initPokemon(int num){
	HP = num;
}
void pokemon:: printData() {
	cout << "your pokemon's health is " << HP << endl;

}
char foodDrop(char location) {

	int num = rand() % 100 + 1;

	if (location == 'f') {
		if (num <= 50) {
			cout << "you got a berry!" << endl;
			return 'b';
		}
		else {
			cout << "you got a mushroom!" << endl;
			return 'm';

		}
	}
	else if (location == 'd') {
		if (num <= 20) {
			cout << "You got a berry!" << endl;
			return 'b';
		}
		else if (num <= 40) {
			cout << "You got a fruit!" << endl;
			return 'f';
		}
		else if (num < 40) {
			cout << "You found some cheese?" << endl;
			return 'c';
		}
	}


	else
		cout << "invalid location" << endl;

}