#include "Simple_window.h"
#include "Graph.h"

double one(double x) { return 1; }
double slope(double x) { return x/2; }
double square(double x) { return x*x; }
double sloping_cos(double x) { return cos(x) - slope(x); }

int main()
try{
	using namespace Graph_lib;

	const int xmax = 600;
    const int ymax = 600;

    const int x_orig = xmax/2;
    const int y_orig = ymax/2;

    const Point orig(x_orig,y_orig);

    const int r_min = -10;
    const int r_max = 11;

    const int n_points = 400;

    const int x_scale = 20;
    const int y_scale = 20;

    const int xlength = xmax - 200;
    const int ylength = ymax - 200;

	Simple_window win {Point{100,100}, xmax, ymax, "Function graphs"};

    Axis x {Axis::x, Point{100,y_orig}, xlength, xlength/x_scale, "1 = = 20 pixels"};
    Axis y {Axis::y, Point{x_orig,ylength+100}, ylength, ylength/y_scale, "1 = = 20 pixels"};
    
    x.set_color(Color::red);
    y.set_color(Color::red);

    win.attach(x);
    win.attach(y);

    //Function f{one,r_min,r_max,orig,n_points,x_scale,y_scale};
    
    Function f1 {one, r_min, r_max, orig, n_points, x_scale, y_scale};
    win.attach(f1);

    Function f2 {slope, r_min, r_max, orig, n_points, x_scale, y_scale};
    win.attach(f2);

    Text t {Point{100,ymax-220}, "x/2"};
    win.attach(t);

    Function f3 {square,r_min,r_max,orig,n_points,x_scale,y_scale};
    win.attach(f3);

    Function f4 {cos, r_min, r_max, orig, n_points, x_scale, y_scale};
    f4.set_color(Color::blue);
    win.attach(f4);

    Function f5 {sloping_cos, r_min, r_max, orig, n_points, x_scale, y_scale};
    win.attach(f5);

    win.wait_for_button();
}
catch (exception& e) {
    std::cerr << "Exception: " << e.what() << '\n';
    return 1;
}
catch (...) {
    std::cerr << "Unknown error!\n";
    return 2;
}
