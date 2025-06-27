#include "IdGenerator.h"

int IdGenerator::nextId = 1;  

int IdGenerator::getNextId() {
    return nextId++;
}
