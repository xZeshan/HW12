#include "Graph.cpp"
using namespace std;

int main(){

int NodeNum, MaxiEdge, Start, End;

cout<<"Enter vertices count: ";

cin>>NodeNum;

Graph graph(NodeNum);

MaxiEdge = NodeNum * (NodeNum - 1);

for (int it = 0; it < MaxiEdge; it++){

cout<<"Enter -1 -1 to exit: ";

cin>>Start>>End;

if((Start == -1) && (End == -1))
break;

graph.add(Start, End);
}
graph.display();
system("pause");
return 0;
}
