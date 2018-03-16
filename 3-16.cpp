#include <iostream>
using namespace std;
int main() {
	int room = 1;
	char input = 'm';
	while (input != 'q') {
		switch (room) {
		case 1:
			cout << "you're in the vault door room, you can go east (e)" << endl;
			cin >> input;
			if (input == 'e')
				room = 2;
			break;
		case 2:
			cout << "you're in the elevator room, you can go east (e), west(w) or down (d)" << endl;
			cin >> input;
			if (input == 'e')
				room = 3;
			else if (input == 'w')
				room = 1;
			else if (input == 'd')
				room = 6;
			break;
		case 3:
			cout << "you're in the rando room, you can go east (e), west (w)" << endl;
			cin >> input;
			if (input == 'e')
				room = 4;
			else if (input == 'w')
				room = 2;
			break;
		case 4:
			cout << "you're in the kitchen, you can go west (w)" << endl;
			cin >> input;
			if (input == 'w')
				room = 3;
			break;
		}
	}
}