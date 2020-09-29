//
// Created by Matt Perry 
// This contains the protypes for functions required for my soultion to the exaustive search for CS411 Hw2
// 

#ifndef CS411_HW2_BUILD_H
#define CS411_HW2_BUILD_H
#include <vector>
#include <algorithm>
#include <cmath>
using Bridge = std::vector<int>;
int build(int , int , const std::vector<Bridge> &);
int generate_legal_bridge_sets(const std::vector<std::vector<Bridge>> &, std::vector<std::vector<Bridge>> &);
void generate_all_subsets(const std::vector<Bridge> &, std::vector<std::vector<Bridge>> &);
bool compare_bridge_nodes(const int &, const int &, const int &, const int &);
#endif //CS411_HW2_BUILD_H
