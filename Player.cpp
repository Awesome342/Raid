#include "Player.h"

Player::Player()
{
    Img = IMG_Load("data/Spaceship.png");
    ImgClip.x = 0;
    ImgClip.y = 64;
    ImgClip.w = 64;
    ImgClip.h = 64;
    ImgPos.x = 0;
    ImgPos.y = 425;
    ImgPos.w = 64;
    ImgPos.h = 64;
}

void Player::draw( SDL_Surface *Screen )
{
    SDL_BlitSurface( Img, &ImgClip, Screen, &ImgPos );
    Bullet.draw( Screen );
}

void Player::getInput()
{
    key = SDL_GetKeyState( NULL );
    if ( key[SDLK_RIGHT] )
    {
        ImgPos.x += 15;
    }
    if ( key[SDLK_LEFT] )
    {
        ImgPos.x -= 15;
    }
    if ( key[SDLK_UP] )
    {
        ImgPos.y -= 15;
    }
    if ( key[SDLK_DOWN] )
    {
        ImgPos.y += 15;
    }
    if ( key[SDLK_SPACE] )
    {
        Bullet.fire( ImgPos.x, ImgPos.y );
    }

    Bullet.update();
}

Player::~Player()
{
    SDL_FreeSurface( Img );
}
