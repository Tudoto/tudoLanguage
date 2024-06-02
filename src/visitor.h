#ifndef VISITOR_H
#define VISITOR_H
class node;
class opNode;
class intNode;
class visitor
{
    public:
    void visit(node* n);
    virtual void visit(intNode* n)= 0;
    virtual void visit(opNode* n)= 0;
};


class printVisitor : public visitor {
public:
    void visit(node* n);
    virtual void visit(intNode* n);
    virtual void visit(opNode* n);
};


#endif