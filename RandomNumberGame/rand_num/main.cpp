#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int rand_number;
    int user_answer;
    int attempts_count{5};




    do{
        std::cout << "try to guess the number" << std::endl;
        std::cout << "your number is: ";
        std::cin >> user_answer;

        rand_number = rand()%100;
        if ( user_answer == rand_number )
        {
            std::cout << "You won!!!" << std::endl;
            break;
        }
        else
        {
            std::cout << "\33c";
            std::cout << "Random number is " << rand_number << " You wrong!" << std::endl;
            attempts_count--;
            std::cout << "you have " << attempts_count << " more attempts" << std::endl;

        }

    }
    while (attempts_count!=0);
    std::cout << "GAME OVER!!!" << std::endl;


    return 0;
}
