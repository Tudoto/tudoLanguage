#include "visitor.h"
#ifndef AST_H
#define AST_H
class visitor;

class node
{
public:
    virtual void accept(visitor* v) = 0;
private:
};

enum OpTypes
{
    OP_PLUS,
    OP_MINUS,
    OP_MULT,
    OP_DIV
};

class opNode : public node
{
public:
    opNode(OpTypes optype,node *leftNode,node *rightNode):optype(optype),leftNode(leftNode),rightNode(rightNode){};
    void addLeftNode(node *leftNode) { this->leftNode = leftNode; };
    void addRightNode(node *rightNode) { this->rightNode = rightNode; };
    node *getLeftNode() { return leftNode; };
    node *getRightNode() { return rightNode; };
    OpTypes getOpTypes() { return optype; };
    virtual void accept(visitor* v);
private:
    OpTypes optype ;
    node *leftNode = nullptr;
    node *rightNode = nullptr;
};

class intNode : public node
{
public:
    intNode(int num):num(num) {};
    int getValue() { return num; }
    virtual void accept(visitor* v);
private:
    int num = 0;
};

#endif