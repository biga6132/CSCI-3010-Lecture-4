#include <iostream>
#include <vector>
#include "functions_to_implement.cpp"


int main(){
    //Sums cases
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {2, 3, 4};
    std::vector<int> v3 = {3, 4, 5};
    //Sum cases
    Sum(v1);
    Sum(v2);
    Sum(v3);
    //Product cases
    Product(v1);
    Product(v2);
    Product(v3);
    //VectorPlusN cases
    VectorPlusN(v1, 1);
    VectorPlusN(v1, 2);
    VectorPlusN(v1, 3);

}