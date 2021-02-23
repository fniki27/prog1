#include "Simple_window.h"
#include "Graph.h"


double one(double) { return 1; }
double square(double x) { return x*x; }

int main()
try{

    using namespace Graph_lib;

    int xmax = 600;
    int ymax = 400;

    int xorig = xmax/2;
    int yorig = ymax/2;

    int rmin = -10;
    int rmax = 10;

    int n_points = 500;

    Simple_window win {Point{100,100}, xmax, ymax, "My window"};

    Point origo {xorig, yorig};

    int xlength = xmax - 40;
    int ylength = ymax - 40;

    int xscale = 20, yscale = 20;

    Axis x{Axis::x, Point{50, yorig}, xlength, xlength/xscale, "x "};
    Axis y{Axis::y, Point{xorig, ylength+20}, ylength, ylength/yscale, "y "};
    y.set_color(Color::dark_green);
    y.label.set_color(Color::dark_red);

    Mark m(Point(100,200),'*');

    Function s (one, rmin, rmax, origo, n_points, xscale, yscale);
    
    Function sq (square, rmin, rmax, origo, n_points, xscale, yscale);
    
    Function sine{sin,0,100,origo,1000,40,40};
    sine.set_color(Color::yellow);

    Function cosine(cos,0,100,Point(20,175),100,10,10);

    Polygon poly;
    poly.add(origo);
    poly.add(Point{250,300});
    poly.add(Point{180,150});
    poly.set_color(Color::dark_magenta);
    poly.set_style(Line_style::dash);
    poly.set_fill_color(Color::yellow);

    Text t{Point{90,350},"Hello, graphical world!"};
    //t.set_font(Font::times_bold);
    t.set_font_size(20);
    t.set_color(Color::red);

    Image ii {Point {80,20},"kitten.jpg"};

    Rectangle r {Point{300,50}, 200, 50};
    r.set_fill_color(Color::blue);
    r.set_style(Line_style(Line_style::dash, 4));

    Circle c {Point{100,200}, 50};
    c.set_fill_color(Color::green);
    c.set_style(Line_style(Line_style::dot,2));


    win.attach(ii);
    win.attach(x);
    win.attach(y);
    win.attach(sine);
    win.attach(cosine);
    win.attach(poly);
    win.attach(c);
    win.attach(m);
    win.attach(r);
    win.attach(t);
    win.wait_for_button();
}
catch(exception& e){
    cerr <<"exception: " << e.what() << '\n';
    return 1;
}
catch(...){
    cerr <<"error\n";
    return 2;
}
