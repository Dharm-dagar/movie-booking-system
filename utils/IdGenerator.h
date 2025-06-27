#pragma once

class IdGenerator {
private:
    static int nextId;  

public:
    static int getNextId();  
};
