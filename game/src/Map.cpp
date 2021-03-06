#include "Map.h"
#include <stdlib.h>

Map::Map(void)
{
        generateMap();
}

Map::~Map(void)
{
}

void Map::drawStar(float x, float y)
{
        glColor3f(1,1,1);
        glLineWidth(2);
        glBegin(GL_LINE_LOOP);
            glVertex2f(x, y);
            glVertex2f(x + 0.02, y + 0.03);
            glVertex2f(x + 0.04, y);
            glVertex2f(x - 0.01, y + 0.02);
            glVertex2f(x + 0.05, y + 0.02);
        glEnd();
        
}

void Map::drawMap() {
    for (int i = 0; i < 100; i ++) {
        drawStar(xarray[i],yarray[i]);
    } 
}

void Map::generateMap() {
    for (int i = 0; i < 100; i ++) {
        int x = rand() % 20;
        x = x - 10;
        float xf = x / 10.0;
        int y = rand() % 100;
        float yf = y / 10.0;
        xarray[i] = xf;
        yarray[i] = yf;
    }
}