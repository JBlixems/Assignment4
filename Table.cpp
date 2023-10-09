#include "Table.h"

Table::Table(string name){
    this->name = name;
}

string Table::getName(){
    return this->name;
}

void Table::addRow(Data* d){
    rows.push_back(d);
}