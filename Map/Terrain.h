#pragma once
#include "../Tools/Vec2.h"
#include "../Living.h"

using Warcraft::Living;

namespace Warcraft::Environment
{
    enum TerrainType
    {
        GROUND,
        GOLD
    };

    class Terrain
    {
        public:
            Terrain(int x, int y)
            {
                coord.x = x;
                coord.y = y;
            }

        public:
            virtual int GetResourceLeft() = 0;
            
        private: 
            int resourceLeft;
            Vec2 coord;
            TerrainType type = GROUND;
            Living* object;
    };
}
