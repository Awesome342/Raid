#ifndef BULLET_H
#define BULLET_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Bullet
{
    public:
        Bullet();
        void draw( SDL_Surface *Screen, SDL_Surface *Img );
        void moveUp();
        void moveDown();
        void changePos( int newx, int newy );

        SDL_Rect Pos;

};

#endif
