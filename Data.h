#ifndef DATA_H
#define DATA_H

#include <string>
using namespace std;

class Data {
    private:
        static int count;

    public:
        int id;
        string username;
        string email;
        string password;

        Data(string, string, string);
        
};

#endif