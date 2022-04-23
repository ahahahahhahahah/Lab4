#ifndef CSVREADER_H
#define CSVREADER_H

#include <string>
#include <fstream>
#include <vector>
#include "cars.h"

class CSVReader
{
    std::ifstream fin;


    CSVReader(const CSVReader&) = delete;
    CSVReader& operator=(const CSVReader&) = delete;

public:

    CSVReader(const std::string& filename);
    ~CSVReader();

    bool is_open() const {return fin.is_open();};
    //Оператор присваивания перемещением
    CSVReader& operator= (CSVReader&& orther);
    // Конструктор перемещения
    CSVReader(CSVReader&& orther);

    std::vector<Cars> readAll();

};

#endif // CSVREADER_H
