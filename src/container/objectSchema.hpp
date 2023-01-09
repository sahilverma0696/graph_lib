class Enum {
};

class NodeEnum: public Enum 
{
public:
    enum 
    {
        nameString = 0,
    };

};

class EdgeEnum: public Enum
{
    public:
        enum
        {
            fromNode = 0,
            toNode,
            relation,
        };
};