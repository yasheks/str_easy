#include <iostream>
#include <string>

using namespace std;

string itc_hello_str(string name)
{
    return "Hello, " + name;
}
long long itc_len(string str)
{
     int i = 0;
    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}
void itc_print_copy_str(string str, int number)
{
    for(int i = 0; i < number; i++)
        cout << str << " ";
}
void itc_first_end_three(string str)
{
    if (itc_len(str) <= 5)
    {
        for(int i = 0; i < itc_len(str); i ++)
            cout << str[0] << endl;
    }
    else
    {
        for (int i = 0; i < 3; i++)
        {
            cout << str[i];
        }
        for (long long i = itc_len(str) - 3; i < itc_len(str); i++)
        {
            cout << str[i];
        }
    }
}
int itc_count_char_in_str(char ch, string str)
{
    int score = 0;
    for (int i = 0; i < itc_len(str); i++)
    {
        if (str[i] == ch)
        {
            score++;
        }
    }
    return score;

}
