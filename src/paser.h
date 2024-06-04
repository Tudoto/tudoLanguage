#include "ast.h"
#include <queue>
#include <iostream>
#ifndef PASER_H
#define PASER_H
enum types
{
    INT,
    PLUS,
    MINUS,
    MULT,
    DIV,
    LEFT_PAR,
    RIGHT_PAR
};
class token
{
public:
    token(types type, std::string content) : type(type), content(content) {}

    std::string content;
    types type;
};

enum states
{
    INIT = 0,
    NUM,
    OP,
};

class tokenManager
{
public:
    token *getToken()
    {
        if (tokens.empty())
        {
            return nullptr;
        }
        token *token = tokens.front();

        return token;
    }
    void consumeToken()
    {
        tokens.pop();
    }
    void printToken(){
        while(!tokens.empty()){
            std::cout << tokens.front()->content<< std::endl;
            tokens.pop();
        }
    }
    void splitTokens()
    {
        FILE *fp = fopen("../test_token.txt", "r");
        if (fp == nullptr)
        {
            printf("failed to open the file, please check!\n");
        }
        char ch;
        std::string content;
        states state = INIT;
        while ((ch = getc(fp)) != EOF)
        {
            if (ch == ' ' || ch == '\n')
            {
                if (state == NUM)
                {
                    token *newInt = new token(INT, content);
                    tokens.push(newInt);
                    state = INIT;
                    content = "";
                }
            }
            else if (ch == '+')
            {
                if (state == NUM)
                {
                    token *newInt = new token(INT, content);
                    tokens.push(newInt);
                    state = INIT;
                    content = "";
                }
                token *newOp = new token(PLUS, content);
                tokens.push(newOp);
            }
            else if (ch == '-')
            {
                if (state == NUM)
                {
                    token *newInt = new token(INT, content);
                    tokens.push(newInt);
                    state = INIT;
                    content = "";
                }

                token *newOp = new token(MINUS, content);
                tokens.push(newOp);
                break;
            }
            else if (ch == '*')
            {
                if (state == NUM)
                {
                    token *newInt = new token(INT, content);
                    tokens.push(newInt);
                    state = INIT;
                    content = "";
                }

                token *newOp = new token(MULT, content);
                tokens.push(newOp);
            }
            else if (ch == '/')
            {
                if (state == NUM)
                {
                    token *newInt = new token(INT, content);
                    tokens.push(newInt);
                    state = INIT;
                    content = "";
                }

                token *newOp = new token(DIV, content);
                tokens.push(newOp);
            }
            else if (ch == '(')
            {
                if (state == NUM)
                {
                    token *newInt = new token(INT, content);
                    tokens.push(newInt);
                    state = INIT;
                    content = "";
                }
                token *newOp = new token(LEFT_PAR, content);
                tokens.push(newOp);
                state = INIT;
            }
            else if (ch == ')')
            {
                if (state == NUM)
                {
                    token *newInt = new token(INT, content);
                    tokens.push(newInt);
                    state = INIT;
                    content = "";
                }
                token *newOp = new token(RIGHT_PAR, content);
                tokens.push(newOp);
                state = INIT;
            }
            else if (ch >= '0' && ch <= '9')
            {
                state = NUM;
                content += ch;
            }
            else
            {
                printf("illegal input\n");
            }
        }
        if (state == NUM) {
            token *newInt = new token(INT, content);
            tokens.push(newInt);
        }
        fclose(fp);
    }
    
private:
    std::queue<token *> tokens;
};
class paser : public tokenManager
{
public:
    node *expression();
    node *term();
    node *factor();
};

#endif