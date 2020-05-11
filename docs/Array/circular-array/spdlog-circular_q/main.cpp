#include "circular_q.h"
using namespace spdlog::details;
int main()
{
    circular_q<int> my_q(10);
    for (int i = 0; i < 100; i++)
    {
        my_q.push_back(i);
    }
}