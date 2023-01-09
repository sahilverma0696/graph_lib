/*
Contains a base data struct class and derived class.

the derived data structs are currently just wrapper around std lib data structure
*/

#include<string>

class BaseDataStructure
{
// Facade class
public:
private:
};

class String: public BaseDataStructure
{
    // to overload = as assign string
private:
    std::string s;

public:
    String(std::string value)
    {
        s = value;
    }

    std::string     get()
    {
        return s;
    }

    void            set(std::string value)
    {
        s = value;
    }
};

class Int: public BaseDataStructure
{
    // to overload = as assign string
private:
    int i;

public:
    Int(int value)
    {
        i = value;
    }

    int            get()
    {
        return i;
    }

    void            set(int value)
    {
        i = value;
    }
};

