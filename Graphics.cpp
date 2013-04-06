#include "Graphics.h"

Graphics::Graphics()
{
    Screen = SDL_SetVideoMode( 800, 600, 32, SDL_SWSURFACE );
    bg = IMG_Load("data/bg3.png");
}

void Graphics::draw()
{
    SDL_BlitSurface( bg, NULL, Screen, NULL );
    Knight.getInput();
    Enemy.checkEnemies( Knight.Bullet.newBullet.Pos );
    Enemy.updateEnemies( Knight.ImgPos.x, Knight.ImgPos.y );
    Enemy.draw( Screen );
    Knight.draw( Screen );
    SDL_Flip( Screen );
}

Graphics::~Graphics()
{
    SDL_FreeSurface( Screen );
    SDL_FreeSurface( bg );
}
