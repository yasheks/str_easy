#include <iostream>
#include <string>
#include "str_easy.h"
using namespace std;

string itc_even_place(string str)
{
    string result = "";

    if (itc_len(str) <= 1)
        return "-1";

    for (int i = 0; i < itc_len(str); i++)
    {
        if ((i + 1) % 2 == 0)
            result += str[i];
    }

    return result;
}
double itc_percent_lower_uppercase(string str)
{
    double visoki = 0, niski = 0;
    for(int i = 0; i < itc_len(str); i++)
    {
         if ((str[i] <= 'Z') && (str[i] >= 'A'))
        {
            visoki++;
        }

        if ((str[i] <= 'z') && (str[i] >= 'a'))
        {
            niski++;
        }
    }
    double result = visoki/niski;
    return result;
}
string itc_reverse_str(string str)
{
    int len = itc_len(str);
    string revers;
    while(len-1 >= 0)
    {

        revers += str[len-1];
        len--;

    }
    return revers;
}
string itc_slice_str(string str, int start, int end)
{
    string score;
    if (start > end)
    {
        return str;
    }

    if (end > itc_len(str) - 1)
    {
        end = itc_len(str) - 1;
    }

    for (int i = start; i <= end; i++)
    {
        score += str[i];
    }

    return score;
}
bool itc_equal_reverse(string str)
{
    string norm = str, nenorm=itc_reverse_str(str);
    //int i = itc_len(norm);

    if (norm == nenorm)
        return true;
    else
        return false;
}
