#include "Simple_window.h"
#include "Graph.h"

int main()
try{
        using namespace Graph_lib;
    
        Simple_window win{Point{100,100}, 800,1000, "My window"};
	
        Lines grid;
        int x_size = 800;
        int y_size = 800;

        for (int i = 100; i<=x_size; i+=100) 
        {
            grid.add(Point(i,0),Point(i,y_size));
            grid.add(Point(0,i),Point(x_size,i));
        }

    
        Rectangle r1{Point {0,0},100,100};
        Rectangle r2{Point {100,100},100,100};
	Rectangle r3{Point {200,200},100,100};
	Rectangle r4{Point {300,300},100,100};
	Rectangle r5{Point {400,400},100,100};
	Rectangle r6{Point {500,500},100,100};
	Rectangle r7{Point {600,600},100,100};
	Rectangle r8{Point {700,700},100,100};

	r1.set_fill_color(Color::red);
	r2.set_fill_color(Color::red);
	r3.set_fill_color(Color::red);
	r4.set_fill_color(Color::red);
	r5.set_fill_color(Color::red);
	r6.set_fill_color(Color::red);
	r7.set_fill_color(Color::red);
	r8.set_fill_color(Color::red);

	Image i1 {Point {0,300},"frogcat.jpg"};
	Image i2 {Point {100,600},"frogcat.jpg"};
	Image i3 {Point {600,100},"frogcat.jpg"};

	win.attach(i1);
	win.attach(i2);
	win.attach(i3);


	win.attach(r1);
	win.attach(r2);
	win.attach(r3);
	win.attach(r4);
	win.attach(r5);
	win.attach(r6);
	win.attach(r7);
	win.attach(r8);

	win.attach(grid);

	Image i4 {Point{0,0}, "redpanda.jpg"};
	win.attach(i4);

	for(int i = 0; i < 8; i++)
        for(int j = 0; j < 8; j++)
        {
            win.wait_for_button();
            if(j < 7)
            
                i4.move(100,0);
              
            else
                i4.move(-700,100);
	}


}
catch(exception& e){
	cerr <<"exception: " << e.what() << '\n';
	return 1;
}
catch(...){
	cerr <<"error\n";
	return 2;
}
