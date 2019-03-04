#include "dungeoncrawlheader.h"
#include <iostream>
#include <vector>
#include<random>
#include <algorithm>

namespace DungeonCrawl {


static struct player
{
    char symbol='$';
    unsigned int x={1};
    unsigned int y={1};
} player{};

const size_t ROW = 10;
const size_t COL= 12;


static char field='.';
static char tree='T';
static char exit='X';
static char scope='*';
static std::vector<std::vector<char> > map/*(ROW,std::vector<char>(COL))*/;
void showMap()
{







    for(size_t i{0}; i<map.size(); ++i)
    {

        for(size_t j{0}; j<map.size(); ++j)
        {

            if (player.x==i && player.y==j)
            {
                std::cout<<player.symbol<<" ";
            }
            else
            {

                map.push_back({field,field,field,field,field,field,field,field,field,field,field,field});
                std::cout<<map[i][j]<<' ';
            }

        }
        std::cout<<std::endl;
    }
}


void movePlayer()
{
    char command;
    std::cin>>command;
    switch (command) {
    case 'w':
        if (player.x-1<1)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            --player.x;
        }
        break;
    case 's':
        if (player.x+1>11)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            ++player.x;
        }
        break;
    case 'a':
        if (player.y-1<1)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            --player.y;
        }
        break;
    case 'd':
        if (player.y+1>11)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            ++player.y;
        }
        break;

    default:
        break;
    }
}

bool GameOver()
{
    bool res=false;
    if(map[player.x][player.y]==tree)
    {
        res=true;
    }
    return res;
}

bool Win()
{
    bool res=false;

    if(map[player.x][player.y]==exit)
    {
        res=true;
    }
    return res;

}

}
