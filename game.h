#ifndef GAME_H
#define GAME_H
#include <random>
#include <iostream>

class Game 
{
    private:
        int max;
        int getRandom(int _max){
            std::random_device rd;
            std::mt19937 gen(rd());
            std::uniform_int_distribution<int> distripution(0, _max);
            return distripution(gen);
        }
    public:
        Game(int a){
            max = a;
        }
        int play(){
            int rand = getRandom(max);
            int guess = -1;
            int count = 0;
            std::cout << "Arvaa numero 0 - "<< max<< ": ";
            while (true){
                count++;
                std::cin >> guess;
                if (guess == rand){
                    std::cout << "OIKEIN! arvasit numeron "<< rand << ". Arvasit "<< count<< " kertaa!";
                    return guess;
                }
                else {
                    if (guess < rand){
                        std::cout << "Ylemmäs!: ";
                    }
                    else {
                        std::cout << "Alemmas!: ";
                    }
                }
                
            }
            
        }

};
#endif