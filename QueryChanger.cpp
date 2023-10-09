#include "QueryChanger.h"

QueryChanger::QueryChanger(){}

void QueryChanger::change(string& query){
    int ind = query.find("FROM");
    string move = " " + query.substr(0, ind - 1);

    query.erase(0, ind);
    query.insert(query.length(), move);
}