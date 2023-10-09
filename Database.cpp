#include "Database.h"

Database::Database(string name){
    this->name = name;
    this->tables = map<string, Table*>();
}

string Database::getName(){
    return this->name;
}

Table* Database::getTable(string name){
    return this->tables[name];
}

void Database::addTable(Table* table){
    this->tables[table->getName()] = table;
}