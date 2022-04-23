#include "cars.h"

std::string Cars::to_string()
        {
            std::string object_information;
            object_information = object_information + std::to_string(n);
            object_information = object_information + model;
            object_information = object_information + std::to_string(color);
            object_information = object_information + std::to_string(year);
            return object_information;
        }
Cars::Cars()
{

}

