#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1, Rect *r2){
    double X = max(r1->x, r2->x);
    double W =min(r1->x + r1->w, r2->x + r2->w);
    
    double Y = min(r1->y, r2->y);
    double H =max(r1->y - r1->h, r2->y - r2->h);
    
    if(X >= W || H >= Y){
        return 0;
    }
    return (W-X)*(Y-H);
}
