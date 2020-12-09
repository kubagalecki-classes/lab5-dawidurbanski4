#pragma once

#include "Human.hpp"
#include<iostream>

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    for (Human & i : people) {
        i.birthday();
    }
    std::vector<char> mons;
    for (auto it = people.rbegin(); it != people.rend(); it++) {
        if(it->isMonster())
            mons.push_back('n');
        else
            mons.push_back('y');
    }

    return mons;
}