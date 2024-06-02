#include "paser.h"
#include "ast.h"

node *paser::expression()
{
    node *a = term();
    token *op = getToken();
    while (op != nullptr && (op->type == PLUS || op->type == MINUS))
    {
        consumeToken();
        node *b = term();
        if (op->type == PLUS)
        {
            a = new opNode(OP_PLUS, a, b);
        }
        else
        {
            a = new opNode(OP_MINUS, a, b);
        }
        op = getToken();
    }
    return a;
}

node *paser::term()
{
    node* a = factor();
    token *op = getToken();
    while (op != nullptr && (op->type == MULT || op->type == DIV))
    {
        consumeToken();
        node*  b = factor();
        if (op->type == MULT)
        {
            a = new opNode(OP_MULT, a, b);
        }
        else
        {
            a = new opNode(OP_DIV, a, b);
        }
        op = getToken();
    }
    return a;
}

node *paser::factor()
{
    token *op = getToken();
    if (op != nullptr && op->type == LEFT_PAR)
    {
        consumeToken();
        node *a = expression();
        return a;
    }
    else if (op != nullptr &&  op->type == INT)
    {
        int num = std::stoi(op->content);
        consumeToken();
        return new intNode(num);
    }
    
    return nullptr;
}


