#include "Enemy.h"

Enemy::Enemy()
{
    Img = IMG_Load("data/enemyShip.png");
}

void Enemy::draw( SDL_Surface *Screen )
{
    SDL_BlitSurface( Img, &Clip, Screen, &Pos );
}

void Enemy::chasePlayer()
{
    Pos.y += 1;
}

bool Enemy::IsCollision( SDL_Rect A, SDL_Rect B )
{
    if ( 	A.x 		<	B.x + B.w 	&&
            A.x + A.w 	> 	B.x 		&&
            A.y		    <	B.y + B.h 	&&
            A.y + A.h	>	B.y )
	{
		return true;
	}
	else
	{
	    return false;
	}
}

bool Enemy::IsHit( SDL_Rect Bullet )
{
    if ( IsCollision( Bullet, Pos ) )
    {
        return true;
    }
    else
    {
        return false;
    }
}

Enemy::~Enemy()
{
    SDL_FreeSurface( Img );
}
