#ifndef NLINK
#define NLINK

//#include <GL/glut.h>
#include <QtOpenGL/QGLWidget>
#include <vector>
#include <string>
#include <list>
#include <map>
#include <algorithm>
#include <math.h>
#include "NucleotideLink.h"

#define PI 3.141592653589793

using namespace std;

class NucleotideLinker
{
public:
	size_t F_width;
	unsigned int min_width;
	vector<NucleotideLink> links;

	NucleotideLinker();
	/*
	inline NucleotideLink operator[] (int index)
	{
		return link_map[ (index/8) * 8 ];//round down index
	}*/
		
	void display();
	
	void calculate(string sequence, int min = 200);
	
	vector<float> smooth( int preferred_width, int blur_size);
	
//	void tie_up_loose_ends(vector<float>& width_list);
private:
	void draw_arc(int distance);
	
	void DrawArc(float r, float cx = 0, float cy = 0, float start_angle = PI, float arc_angle= PI, int num_segments = 0);
	
	NucleotideLink multiples_check(const string& seq, NucleotideLink match, int consensus_width);
	
	NucleotideLink localized_search(const string& seq, size_t start, size_t dist, size_t range);
	
	void check_for_max(const string& seq, size_t dist, size_t index, short int& max, int& best_distance);
	
	float average( const list<int>& window );
	
};



#endif
