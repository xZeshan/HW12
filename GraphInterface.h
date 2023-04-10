#ifndef GRAPH INTERFACE
#define GRAPH INTERFACE

template
class GraphInterface{
public:

virtual int getNum Vertices() const = 0;

virtual int getNumEdges() const = 0;

virtual void add(Label Type start, LabelType end) = 0;

virtual bool remove(LabelType start, LabelType end) = 0;

virtual int getEdgeWeight(LabelType start, LabelType end) const = 0;

virtual void display()= 0;
};

#endif

int edgeWeight;

int numOfEdges;

int numOfVertices;

public:
Graph(Label Type n);

int getNum Vertices() const;

int getNumEdges() const;

int getEdgeWeight(LabelType start, Label Type end)const;

void add(LabelType start, LabelType end);

bool remove(LabelType start, LabelType end);

void display();
};
#endif
