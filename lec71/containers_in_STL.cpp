/*
 * containers are three types
 *      1.sequence containers
 *          example:- vector, list, dequeue 
 *          [° | ° | ° | ° ] --> data structure like array
 *
 *          stores data in linear fashion
 *      2.associative containers
 *          example:- set/multiset, map/multimap
 *          [° | *p] [° | *p] [° | *p] --> data structure like linked list
 *
 *          stores data for direct access
 *      3.derived containers
 *          example:- mixture of sequence, associative containers for real world modeling like stack, queue
 *
 *          --> data structure varies
 *
 *          stores data for real world modeling
 *
 * velocity of operations
 *      1. sequence containers:
 *          1.vector:- Random access --> fast
 *                     middle ins/del --> slow
 *                     end ins/del --> fast
 *          2.list:- Random access --> slow
 *                     middle ins/del --> fast
 *                     end ins/del --> fast
 *      2.associative containers:
 *          all operations fast, except Random Access
 *      3.derived containers:
 *          depends on data structure
 *
 *  use sequence containers for fast access, and use associative containers for fast searching
 *
 */
#include <iostream>

using namespace std;

int main() {
    return 0;
}

