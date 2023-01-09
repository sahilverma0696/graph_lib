/*
IDEA 
    TO have a random number generator and a hash to check this number is new. 
    around this a wrapper can be present that appends the num by a string, which says the type of id this is 

*/

#include<random>
#include<string>
#include<unordered_set>
#include<iostream>


class IdGenerator {
private:
    long rangeStart = 1000000000;
    long rangeEnd   = 9999999999;
    std::unordered_set<long> NodeBucket;
    std::unordered_set<long> EdgeBucket;

    bool    isPresent(long num,std::unordered_set<long> IdBucket)
    {
        return IdBucket.find(num) != IdBucket.end()?true:false;
    }

    long    __gen__()
    {
        std::random_device dev;
        std::mt19937 rng(dev());
        std::uniform_int_distribution<std::mt19937::result_type> dist6(rangeStart,rangeEnd); 

        return dist6(rng);
        
    }
public:
    long    getID()
    {
        return __gen__();
    }

    //TODO: shrink to one func
    std::string  getNodeID()
    {
        long x = __gen__();
        while(isPresent(x,NodeBucket))
        {
            x = __gen__();
        }
        NodeBucket.insert(x);

        std::string nodeID = "nid" + std::to_string(x);

        return nodeID;

    }

    std::string  getNodeID()
    {
        long x = __gen__();
        while(isPresent(x,EdgeBucket))
        {
            x = __gen__();
        }
        EdgeBucket.insert(x);

        std::string nodeID = "eid" + std::to_string(x);

        return nodeID;

    }

};
