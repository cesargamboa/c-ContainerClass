//
// Created by FF_Cesar on 3/12/20.
//

#ifndef PRACTICAARRAYS_HEROES_H
#define PRACTICAARRAYS_HEROES_H
#include <string>


class Heroes {
private:
    std::string name;
public:
    Heroes(std::string);
    ~   Heroes();
    std::string getName();
    void setName(std::string);

};


#endif //PRACTICAARRAYS_HEROES_H
