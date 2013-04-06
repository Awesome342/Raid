#ifndef ENEMY_H
#define ENEMY_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"

class Enemy
{
    public:
        Enemy();
        ~Enemy();
        void draw( SDL_Surface *Screen );
        void chasePlayer();
        bool IsCollision( SDL_Rect A, SDL_Rect B );
        bool IsHit( SDL_Rect Bullet );

        SDL_Rect Pos;
        SDL_Rect Clip;

    private:
        SDL_Surface *Img;

};

#endif
