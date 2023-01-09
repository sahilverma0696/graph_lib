/*
Node type class
    currently of two types 
        - NodeID 
        - EdgeID
    BaseID
        - NodeID
        - EdgeID
*/
#include<string>

enum idType {
    NodeID = 0,
    EdgeID,
};
class BaseID {
    
private:
    idType type;
    std::string value;

public:
    BaseID (idType type)
    {
        this->type = type;
    }
    std::string     get()
    {
        return value;
    }

    void            set(std::string value)
    {
        this->value = value;
    }

    idType          getidType()
    {
        return type;
    }
};



