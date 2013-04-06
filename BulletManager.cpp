#include "BulletManager.h"

BulletManager::BulletManager()
{
    Img = IMG_Load("data/Skull_BreakTheZombie.png");
    IsFiring = false;
}

void BulletManager::fire( int Playerx, int Playery )
{
    IsFiring = true;
    newBullet.changePos( Playerx, Playery );
}

void BulletManager::update()
{
    newBullet.moveUp();

    if ( newBullet.Pos.y < 0 )
    {
        IsFiring = false;
    }
}

void BulletManager::draw( SDL_Surface *Screen )
{
    if ( IsFiring == true )
    {
        newBullet.draw( Screen, Img );
    }
}

BulletManager::~BulletManager()
{
    SDL_FreeSurface( Img );
}
