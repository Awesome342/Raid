#ifndef PLAYER_H
#define PLAYER_H

#include "SDL/SDL.h"
#include "SDL/SDL_image.h"
#include "BulletManager.h"

class Player
{
    public:
        Player();
        ~Player();
        void draw( SDL_Surface *Screen );
        void getInput();

        BulletManager Bullet;
        SDL_Rect ImgPos;

    private:
        SDL_Surface *Img;
        SDL_Rect ImgClip;

        Uint8 *key;

};

#endif
