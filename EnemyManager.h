#ifndef ENEMYMANAGER_H
#define ENEMYMANAGER_H

#include "SDL/SDL.h"
#include "Enemy.h"

class EnemyManager
{
    public:
        EnemyManager();
        void draw( SDL_Surface *Screen );
        void checkEnemies( SDL_Rect Bullet );
        void updateEnemies( int x, int y );

    private:
        bool IsDead1;
        bool IsDead2;
        Enemy Enemies [2];

};

#endif
