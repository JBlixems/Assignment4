#ifndef TABLE_H
#define TABLE_H

#include "Data.h"
#include <vector>

class Table{
    private:
        string name;
    
    public:
        vector<Data*> rows;
        
        Table(string);
        string getName();
        void addRow(Data*);
};

#endif