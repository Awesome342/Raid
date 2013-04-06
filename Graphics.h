#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "SDL/SDL_image.h"
#include "Player.h"
#include "EnemyManager.h"

class Graphics
{
    public:
        Graphics();
        ~Graphics();
        void draw();

    private:
        SDL_Surface *Screen;
        SDL_Surface *bg;
        Player Knight;
        EnemyManager Enemy;
};

#endif
