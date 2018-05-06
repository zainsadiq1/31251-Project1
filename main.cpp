#include <iostream>
#include "weighted_graph.hpp"

#include <sstream>

using std::stringstream;
using std::cout;
using std::cin;
using std::endl;


void testAddVertex(void);
int main() {

    testAddVertex();
}

void testAddVertex(void){
    weighted_graph<int> g;
    int r = std::rand()%20;
    for (int i = 0; i < r; ++i) g.add_vertex(i);
    cout << "vertices = " << g.num_vertices() << "\nr = " << r << std::endl;
}