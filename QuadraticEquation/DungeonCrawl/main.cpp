#include <iostream>
#include "dungeoncrawlheader.h"

int main()
{


    do
    {
        DungeonCrawl::showMap();
        std::cout << "W-up\n" << "s-down\n" << "A-left\n" << "D-rigft\n" << "ENTER-put in" << std::endl;
        DungeonCrawl::movePlayer();
        DungeonCrawl::GameOver();
        std::cout << "\033[2J\033[1;1H";
        if (DungeonCrawl::GameOver()==true)
        {
            std::cout << "GAME OVER" << std::endl;
            break;
        }
       if (DungeonCrawl::Win()==true)
       {
           std::cout << "YOU complete level 1" << std::endl;
           break;
       }

      }
     while(DungeonCrawl::GameOver()==false);



    if (DungeonCrawl::Win()==true)
    {
     do
     {
            DungeonCrawl::showMap1();
            std::cout << "W-up\n" << "s-down\n" << "A-left\n" << "D-rigft\n" << "ENTER-put in" << std::endl;
            DungeonCrawl::movePlayer1();
            DungeonCrawl::GameOver1();
            std::cout << "\033[2J\033[1;1H";
            if (DungeonCrawl::GameOver1()==true)
            {
                std::cout << "GAME OVER" << std::endl;
                break;
            }
           if (DungeonCrawl::Win1()==true)
           {
               std::cout << "YOU complete level 2" << std::endl;
               break;
           }

     }

        while(DungeonCrawl::GameOver1()==false);
}

    if (DungeonCrawl::Win1()==true)
    {
     do
     {
            DungeonCrawl::showMap2();
            std::cout << "W-up\n" << "s-down\n" << "A-left\n" << "D-rigft\n" << "ENTER-put in" << std::endl;
            DungeonCrawl::movePlayer2();
            DungeonCrawl::GameOver2();
            std::cout << "\033[2J\033[1;1H";
            if (DungeonCrawl::GameOver2()==true)
            {
                std::cout << "GAME OVER" << std::endl;
                break;
            }
           if (DungeonCrawl::Win2()==true)
           {
               std::cout << "YOU complete level 3" << std::endl;
               break;
           }

     }

        while(DungeonCrawl::GameOver2()==false);
    }








    return 0;
}
