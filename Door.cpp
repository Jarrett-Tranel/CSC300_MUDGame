#include "Door.hpp"
using namespace std;

Door::Door(string directionToRoomA, Room* roomA, string directionToRoomB, Room* roomB)
{
    this->directionToRoomA = directionToRoomA;
    this->directionToRoomB = directionToRoomB;
    this->roomA = roomA;
    this->roomB = roomB;
}

void Door::DisplayDoofo()
{
    //cout << "This door connects " << this->roomA->getTitle() << " and " << this->roomB->title << "\n";
}