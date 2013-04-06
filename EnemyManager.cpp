#include "EnemyManager.h"

EnemyManager::EnemyManager()
{
    Enemies [0].Pos.x = 50;
    Enemies [0].Pos.y = 50;
    Enemies [1].Pos.x = 168;
    Enemies [1].Pos.y = 50;
    IsDead1 = false;
    IsDead2 = false;
}

void EnemyManager::draw( SDL_Surface *Screen )
{
    if ( IsDead1 == false )
    {
        Enemies[0].draw( Screen );
    }
    if ( IsDead2 == false )
    {
        Enemies[1].draw( Screen );
    }
}

void EnemyManager::checkEnemies( SDL_Rect Bullet )
{
    if ( Enemies[0].IsHit( Bullet ) )
    {
        IsDead1 = true;
    }
    if ( Enemies[1].IsHit( Bullet ) )
    {
        IsDead2 = true;
    }

    if ( IsDead1 == true && IsDead2 == true )
    {
        IsDead1 = false;
        IsDead2 = false;

        //reset position
        Enemies [0].Pos.x = ( (int)rand() % 708 );
        Enemies [0].Pos.y = ( (int)rand() % 540 );
        Enemies [1].Pos.x = ( (int)rand() % 708 );
        Enemies [1].Pos.y = ( (int)rand() % 540 );
    }

    if ( Enemies[0].Pos.y > 540 )
        Enemies[0].Pos.y = 0;

    if ( Enemies[1].Pos.y > 540 )
        Enemies[1].Pos.y = 0;
}

void EnemyManager::updateEnemies( int x, int y )
{
    Enemies[0].chasePlayer();
    Enemies[1].chasePlayer();
}
