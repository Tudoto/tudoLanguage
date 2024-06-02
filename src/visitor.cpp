#include "visitor.h"
#include "ast.h"
#include "iostream"
void printVisitor::visit(node *n)
{
    n->accept(this);
}

void printVisitor::visit(opNode *n)
{
    if (n == nullptr)
    {
        printf("got a wrong node\n");
        return;
    }
    visit(n->getLeftNode());
    visit(n->getRightNode());
    switch (n->getOpTypes())
    {
    case OP_PLUS:
        printf("OP_PLUS\n");
        break;
    case OP_MINUS:
        printf("OP_MINUS\n");
        break;
    case OP_MULT:
        printf("OP_MULT\n");
        break;
    case OP_DIV:
        printf("OP_DIV\n");
        break;
    default:
        printf("UNKONWN OP\n");
    }
}

void printVisitor::visit(intNode *n)
{
    printf("LOAD_CONST\t%d\n", n->getValue());
}