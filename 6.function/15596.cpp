#include <vector>

long long sum(std::vector<int> &a){

    long long synthesis = 0;

    for (int x : a){
        synthesis += x;
    }
    return synthesis;
}