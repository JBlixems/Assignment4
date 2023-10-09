#ifndef DATABASE_H
#define DATABASE_H

#include "Table.h"
#include <map>

class Database {
    private:
        map<string, Table*> tables;
    
    public:
        string name;
        Database(string);
        string getName();
        Table* getTable(string);
        void addTable(Table*);
};

#endif