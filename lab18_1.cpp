#include<iostream>
#include<algorithm>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect r1, Rect r2){
    double X = max(r1.x , r2.x);
    double rr1 =r1.x + r2.w;
    double rr2 =r1.w + r2.x;
    double W =min(rr1, rr2) - X;
    
    double Y = max(r1.y, r2.x);
    double bt1 =r1.y + r2.w;
    double bt2 =r1.w + r2.y;
    double H =min(bt1, bt2) - Y;
    
    if(W <= 0 || H <= 0){
        return 0;
    }
    return W*H;
}
