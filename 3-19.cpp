#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h>
#include <allegro5/allegro_image.h>

class Goomba {
private:
	int xPos;
	int yPos;
	bool alive;
	ALLEGRO_BITMAP *image;


public:
	void initGoomba(int x, int y, bool d, ALLEGRO_BITMAP*pic);
	void draw();
};


int main() {
	ALLEGRO_DISPLAY *display = NULL;
	al_init();
	al_init_image_addon();
	al_init_primitives_addon();

	display = al_create_display(750, 750);
	ALLEGRO_BITMAP *GoombaPic = al_load_bitmap("Tail-Goomba.PNG");

	Goomba g1;
	Goomba g2;
	Goomba g3;

	g1.initGoomba(50, 100, false, GoombaPic);
	g2.initGoomba(70, 120, false, GoombaPic);
	g3.initGoomba(90, 140, false, GoombaPic);


	
	g1.draw();
	g2.draw();
	g3.draw();

	al_flip_display();
	al_rest(8);

	//destroy stuff


}//end main


void Goomba::initGoomba(int x, int y, bool d, ALLEGRO_BITMAP*pic) {
	xPos = x;
	yPos = y;
	alive = d;
	image = pic;



}
void Goomba::draw() {
	al_draw_bitmap(image, xPos, yPos, 0);


}




