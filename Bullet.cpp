#include "Bullet.h"

Bullet::Bullet()
{
    Pos.w = 32;
    Pos.h = 32;
}

void Bullet::draw( SDL_Surface *Screen, SDL_Surface *Img )
{
    SDL_BlitSurface( Img, NULL, Screen, &Pos );
}

void Bullet::moveUp()
{
    Pos.y -= 15;
}

void Bullet::moveDown()
{
    Pos.y += 15;
}

void Bullet::changePos( int newx, int newy )
{
    Pos.x = newx;
    Pos.y = newy;
}
