#include <allegro5/allegro.h>
#include <allegro5\allegro_primitives.h>
int main() {
	al_init();
	al_init_primitives_addon();

	ALLEGRO_DISPLAY *display = al_create_display(500, 500);

	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_filled_circle(200, 200, 50, al_map_rgb(50, 120, 50));
	al_draw_line(150, 210, 190, 290, al_map_rgb(50, 100, 70), 5);
	al_draw_line(210, 210, 250,290, al_map_rgb(50,100,70), 5);
	
	al_flip_display();

	al_rest(15);
}
