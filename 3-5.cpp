#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h>
#include <iostream>
using namespace std;

class spot {
private:

	int xC;
	int yC;
	int ra;
public:
	void constructor();
		void drawSpot();
		void initSpot(int x, int y, int r);
};
int main() {
	//don't forget these!
	al_init();
	al_init_primitives_addon();
	ALLEGRO_DISPLAY *display = NULL;
	
	display = al_create_display(1500, 1500);

	al_clear_to_color(al_map_rgb(255, 255, 255));


	spot b1;
	b1.initSpot(400, 0, 300);
	spot b2;
	b2.initSpot(300, 500, 200);
	spot b3;
	b3.initSpot(200,400,100);
	spot b4;
	b4.initSpot(100,300,0);
	spot b5;
	b5.initSpot(0,200,500);


	//do this 5 times!!!
	b5.drawSpot();
	b4.drawSpot();
	b3.drawSpot();
	b2.drawSpot();
	b1.drawSpot();


	al_flip_display();


	al_rest(10);

	al_destroy_display(display);
}

void spot::drawSpot() {
	al_draw_filled_circle(xC,yC,ra, al_map_rgb(200,150,80));
}
void spot::initSpot(int x, int y, int r) {
	xC = x;
	yC = y;
	ra = r;
}
void spot::constructor() {
	xC = 0;
	yC = 0;
	ra = 0;
}