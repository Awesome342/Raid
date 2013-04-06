#ifndef SYSTEM_H
#define SYSTEM_H

#include "SDL/SDL.h"
#include "Graphics.h"

class System
{
    public:
        System();
        void Update();

    private:
        bool quit;
        int FrameRate;
        int frameStart;
        int frameDuration;
        SDL_Event event;
        Graphics Sprite;
};

#endif
