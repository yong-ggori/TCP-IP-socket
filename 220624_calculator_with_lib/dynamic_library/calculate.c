#include "calc.h"

int calculate(int opnum, int opnds[], char operator)
{
    int result = opnds[0], idx;
    switch(operator)
    {   
    case '+':
        for(idx = 1; idx < opnum; idx++) result += opnds[idx];
        break;
    case '-':
        for(idx = 1; idx < opnum; idx++) result -= opnds[idx];
        break;
    case '*':
        for(idx = 1; idx < opnum; idx++) result *= opnds[idx];
        break;
    }   
    return result;
}

