//
// Created by FF_Cesar on 3/12/20.
//

#include "Heroes.h"

Heroes::Heroes(std::string n):name(n) {}
Heroes::~Heroes(){

}
std::string Heroes::getName() {{
    return name;
}}
void Heroes::setName(std::string newName) {
    name = newName;
}
