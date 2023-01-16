/*
IDEA: 
contains an unordered_map of node to node connection 

*/

#include<unordered_map>
#include<unordered_set>
#include"../object_mapper/objectMapper.hpp"

class NodeGrid {

private:
    std::unordered_map<BaseID,std::unordered_set<BaseID> > nodeGrid;

public:

    void    addNode(BaseID source)
    {
        nodeGrid[source] = {};
    }

    void    addConnection(BaseID source, BaseID target, bool isBidirectional)
    {
        nodeGrid[source].insert(target);

        if(isBidirectional)
            nodeGrid[target].insert(source);
    } 


    // TODO: add all the CRUD operatations 
};