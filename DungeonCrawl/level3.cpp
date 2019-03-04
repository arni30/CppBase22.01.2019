#include "dungeoncrawlheader.h"
#include <iostream>
namespace DungeonCrawl {


struct player2
{
    char symbol=234;
    int x={1};
    int y={1};
}player2{};

#define ROW 9
#define COL 12
static char field='.';
static char tree='T';
static char exit='X';
static char scope='*';




static char map2[ROW][COL]{
     {scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope},
     {scope,field,tree,tree,field,tree,field,field,field,tree,field,scope},
     {scope,field,field,tree,tree,tree,tree,field,field,field,tree,scope},
     {scope,field,tree,field,field,field,field,field,field,field,field,scope},
     {scope,field,tree,field,tree,field,tree,field,tree,tree,field,scope},
     {scope,field,field,field,tree,field,field,field,field,tree,field,scope},
     {scope,field,tree,field,tree,field,tree,field,tree,tree,field,scope},
     {scope,field,field,field,tree,tree,field,field,tree,tree,exit,scope},
     {scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope}
};
void showMap2()
{
    std::cout.clear();

    for (int i=0;i<ROW;i++)
    {
        for (int j=0;j<COL;j++)
        {
            if (player2.x==i && player2.y==j)
              {
                std::cout<<player2.symbol<<" ";
              }
            else
            {
               std::cout<<map2[i][j]<<' ';
            }

        }
        std::cout<<std::endl;
    }
}


void movePlayer2()
{
    char command;
    std::cin>>command;
    switch (command) {
    case 'w':
       if (player2.x-1<1)
       {
           std::cout<<"вы не можете пойти туда"<<std::endl;
       }
       else
       {
           --player2.x;
       }
        break;
    case 's':
        if (player2.x+1>11)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            ++player2.x;
        }
        break;
    case 'a':
        if (player2.y-1<1)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
       --player2.y;
        }
        break;
    case 'd':
        if (player2.y+1>11)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            ++player2.y;
        }
        break;

    default:
        break;
    }
}

bool GameOver2()
{
    bool res=false;
   if(map2[player2.x][player2.y]==tree)
   {
        res=true;
   }
   return res;
}
   bool Win2()
   {
      bool res=false;

   if(map2[player2.x][player2.y]==exit)
   {
        res=true;
   }
    return res;

}

}

