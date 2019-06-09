#include <stdio.h>
#include <math.h>

typedef struct {
	double x;
	double y;
} Point;

typedef struct {

	Point p1;
	Point p2;

} Segment;
	
typedef struct {
	
	Point points [3];

} Triangle;

void initialiserSegment(Segment* segment, double x1, double x2, double y1, double y2){

	segment->p1.x = x1;
	segment->p2.x = x2;
	segment->p1.y = y1;
	segment->p2.y = y2;
}

double longueurSegment(const Segment* segment){

	return sqrt( pow(segment->p2.x - segment->p1.x, 2) 
		+ pow(segment->p2.y - segment->p1.y, 2) ); 
}

void initialiserTriangle(Triangle* triangle, double x1, double y1,
						double x2, double y2, double x3, double y3){

	triangle->points[0].x = x1;
	triangle->points[0].y = y1;
	triangle->points[1].x = x2;
	triangle->points[1].y = y2;
	triangle->points[2].x = x3;
	triangle->points[2].y = y3;

}

double perimetreTriangle(const Triangle* triangle){

	Segment segment1, segment2, segment3;

	initialiserSegment(&segment1, 
		triangle->points[0].x, triangle->points[0].y,
		triangle->points[1].x, triangle->points[1].y);

	initialiserSegment(&segment2,
		triangle->points[0].x, triangle->points[0].y,
		triangle->points[2].x, triangle->points[2].y);

	initialiserSegment(&segment3,
		triangle->points[1].x, triangle->points[1].y,
		triangle->points[2].x, triangle->points[2].y);
		
	return longueurSegment(&segment1) + 
		   longueurSegment(&segment2) +
		   longueurSegment(&segment3);


}

int main(int argc, char** argv){

	Triangle triangle;

	initialiserTriangle(&triangle, 10, 2, 1 ,2, 1, 100);

	printf("%f\n", perimetreTriangle(&triangle));

	return 0;
}
