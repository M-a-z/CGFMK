#ifndef _MEDIA_H_
#define _MEDIA_H_

#define VARI_NOPPEE { 255, 10, 10, SDL_ALPHA_OPAQUE }
#define VARI_UPPEE { 0, 255, 100, SDL_ALPHA_OPAQUE }
#define VARI_KUOLEMATON { 0, 0, 255 }
#define VARI_HAAMU { 200, 200, 200, SDL_ALPHA_OPAQUE/2 }
#define VARI_RIKKOVA { 255, 220, 0, SDL_ALPHA_OPAQUE }
#define VARI_JAASSA { 0, 20, 255, SDL_ALPHA_OPAQUE }

struct vari {
	unsigned char r;
	unsigned char g;
	unsigned char b;
	unsigned char alpha;
};

struct sounds {
	//The music that will be played
	Mix_Music *music;

	//The sound effects that will be used
	Mix_Chunk *new_ship;
	Mix_Chunk *crash;
	Mix_Chunk *points;
};

struct piirrin {
	TTF_Font* font;
	SDL_Renderer* renderer;
};



#endif
