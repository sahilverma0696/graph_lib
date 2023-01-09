/*
Containers the schema and implementation of an object 

Object 
    {
        field  -> value 
        field1 -> value 1
    }

Object Schema
{
    contains the field(enum) for a certain object 

    object 
    {
        enums
    }
}
*/

#include "./objectSchema.hpp"
#include "../data_structs/base.hpp"

#include<unordered_map>

class Container {

// feature -> immutable, mutable, by using a flag, if flag is false in constructor
private:
    std::unordered_map<Enum,BaseDataStructure> dataStructure;
public:
    Container   ()
    {
        ;
    }
    
    void    clear   ()
    {
        dataStructure.clear();
    }

    BaseDataStructure    get     (Enum field)
    {
        return dataStructure[field];
    }

    void    set     (Enum field, BaseDataStructure value)
    {
        dataStructure[field] = value;
    }


};