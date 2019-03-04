#include "dungeoncrawlheader.h"
#include <iostream>
namespace DungeonCrawl {


struct player1
{
    char symbol=234;
    int x={1};
    int y={1};
}player1{};

#define ROW 9
#define COL 12
static char field='.';
static char tree='T';
static char exit='X';
static char scope='*';




static char map1[ROW][COL]{
     {scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope},
     {scope,field,tree,field,field,field,field,field,field,tree,field,scope},
     {scope,field,tree,field,tree,tree,tree,field,field,field,field,scope},
     {scope,field,tree,field,field,field,field,field,field,field,field,scope},
     {scope,field,tree,field,tree,field,tree,field,tree,tree,field,scope},
     {scope,field,field,field,tree,field,field,field,field,tree,field,scope},
     {scope,field,tree,field,field,field,tree,field,tree,tree,field,scope},
     {scope,field,field,field,tree,tree,field,field,tree,tree,exit,scope},
     {scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope,scope}
};
void showMap1()
{
    std::cout.clear();

    for (int i=0;i<ROW;i++)
    {
        for (int j=0;j<COL;j++)
        {
            if (player1.x==i && player1.y==j)
              {
                std::cout<<player1.symbol<<" ";
              }
            else
            {
               std::cout<<map1[i][j]<<' ';
            }

        }
        std::cout<<std::endl;
    }
}


void movePlayer1()
{
    char command;
    std::cin>>command;
    switch (command) {
    case 'w':
       if (player1.x-1<1)
       {
           std::cout<<"вы не можете пойти туда"<<std::endl;
       }
       else
       {
           --player1.x;
       }
        break;
    case 's':
        if (player1.x+1>11)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            ++player1.x;
        }
        break;
    case 'a':
        if (player1.y-1<1)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
       --player1.y;
        }
        break;
    case 'd':
        if (player1.y+1>11)
        {
            std::cout<<"вы не можете пойти туда"<<std::endl;
        }
        else
        {
            ++player1.y;
        }
        break;

    default:
        break;
    }
}

bool GameOver1()
{
    bool res=false;
   if(map1[player1.x][player1.y]==tree)
   {
        res=true;
   }
   return res;
}

   bool Win1()
   {
      bool res=false;

   if(map1[player1.x][player1.y]==exit)
   {
        res=true;
   }
    return res;

}

}

