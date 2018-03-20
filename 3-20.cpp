#include <allegro5/allegro.h>
#include <allegro5\allegro_image.h>

class Koopa {

private:
	int xPos;
	int yPos;
	ALLEGRO_BITMAP *image;
	ALLEGRO_BITMAP *image2;

public:
	void initKoopa(int x, int y, bool d, ALLEGRO_BITMAP*pic);
	void draw();
};

int main() {
	ALLEGRO_DISPLAY *display = NULL;
	al_init();
	al_init_image_addon();

	display = al_create_display(750, 750);
	ALLEGRO_BITMAP *KoopaG = al_load_bitmap("KoopaGreen.png");
	ALLEGRO_BITMAP *KoopaR = al_load_bitmap("KoopaRed.png");

	Koopa k1;
	Koopa k2;
	Koopa k3;

	k1.initKoopa(50, 100, false, KoopaG);
	k2.initKoopa(200, 150, false, KoopaR);
	k3.initKoopa(410, 200, false, KoopaG);

	k1.draw();
	k2.draw();
	k3.draw();

	al_flip_display();
	al_rest(8);


}


void Koopa::draw() {
	al_draw_bitmap(image, xPos, yPos, 0);

}

void Koopa::initKoopa(int x, int y, bool d, ALLEGRO_BITMAP*pic) {
	xPos = x;
	yPos = y;
	image = pic;
	image2 = pic;

}