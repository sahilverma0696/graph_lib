/*
This is a simple ( fow now ) an unordered Map 
which will be providing link from 
ID -> container
*/
#include<unordered_map>
#include"../container/container.hpp"
#include"../data_structs/id.hpp"

class ObjectMapper {

private:
    idType  type;
    std::unordered_map<BaseID,Container*> map;

public:

    ObjectMapper (idType type) {
        //TODO: initialize this ObjectMapper to that key type only 
        this->type = type;
    }
    Container*  get(BaseID id)
    {
        if(id.getidType()== type)
            return map.find(id) != map.end()? map[id]:nullptr;
    }

    void        set(BaseID id, Container* container)
    {   
        if(id.getidType()== type)
            map[id] = container;
    }

    //TODO: add all CRUD & clear features
};
