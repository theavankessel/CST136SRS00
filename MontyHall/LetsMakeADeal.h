//
// Created by Thea Van Kessel on 4/7/18.
//

#ifndef MONTYHALL_LETSMAKEADEAL_H
#define MONTYHALL_LETSMAKEADEAL_H

#include <iostream>
#include <random>
#include <algorithm>
#include <vector>

using namespace std;

class LetsMakeADeal {
public:
    void setNumOfDoors(int numDoors);
    void setNumOfDoorsToReveal(int numDoorsToReveal);
    void setCarLocation(int locationOfCar);
    void setGuess();

    void switchDoor();
    int randomNumber(int max);
    void createDoors();
    void printArray();
    void revealDoors();
    int winningStatus();



private:
    int numOfDoors;
    int numOfDoorsToReveal;
    int carLocation;
    int guess;

    vector<int> doorVector;
    vector<int>doorsToReveal;
    vector<int>remainingDoors;
};


#endif //MONTYHALL_LETSMAKEADEAL_H
