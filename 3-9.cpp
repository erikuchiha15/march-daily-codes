#include <allegro5/allegro.h>
#include <allegro5/allegro_image.h>
#include <iostream>
using namespace std;
class potato {
private:
		int xPos;
		int yPos;


	public:
		void initpotatos(int x, int y);
		void drawpotatos( ALLEGRO_BITMAP *picture);
};
	

int main() {
	al_init();
	al_init_image_addon();
	ALLEGRO_DISPLAY *display = al_create_display(500, 500);
	al_clear_to_color(al_map_rgb(255, 255, 255));
	ALLEGRO_BITMAP *picture = al_load_bitmap("Potato.png");
	al_convert_mask_to_alpha(picture, al_map_rgb(255, 255, 255));


	while (1) {
		potato b1;
		b1.initpotatos(rand() % 500, rand() % 500);
		b1.drawpotatos(picture);
		al_flip_display();
	}
	system("pause");
	al_destroy_display(display);
}

void potato::initpotatos(int x, int y) {
	xPos = x; 
	yPos = y;
}
void potato::drawpotatos(ALLEGRO_BITMAP *picture) {
	al_draw_bitmap(picture, xPos, yPos, 0);
}