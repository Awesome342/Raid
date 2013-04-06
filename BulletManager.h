#ifndef BULLETMANAGER_H
#define BULLETMANAGER_H

#include "SDL/SDL.h"
#include "Bullet.h"

class BulletManager
{
    public:
        BulletManager();
        ~BulletManager();
        void fire( int Playerx, int Playery );
        void update();
        void draw( SDL_Surface *Screen );

        Bullet newBullet;

    private:
        SDL_Surface *Img;
        bool IsFiring;

};

#endif
