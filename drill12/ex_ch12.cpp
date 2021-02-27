#include "Simple_window.h"
#include "Graph.h"

void ex01(Simple_window& win)
{
    Rectangle rect(Point(100,100),150,50);
    rect.set_color(Color::blue);
    win.attach(rect);

    Polygon polyg;
    polyg.add(Point(100,250));
    polyg.add(Point(250,250));
    polyg.add(Point(250,300));
    polyg.add(Point(100,300));
    polyg.set_color(Color::red);
    win.attach(polyg);

    win.wait_for_button();
}


void ex02(Simple_window& win)
{
    Rectangle name_rect(Point(300,100),100,30);
    win.attach(name_rect);

    Text t(Point(325,120),"Hello!");
    win.attach(t);

    win.wait_for_button();
}


void ex03(Simple_window& win)
{

Text f(Point(200, 250), "F");
f.set_color(Color::dark_magenta);
f.set_font_size(150);

Text n(Point(300, 250), "N");
n.set_color(Color::dark_red);
n.set_font_size(150);

win.attach(f);
win.attach(n);

win.wait_for_button();

}


void ex04(Simple_window& win)
{
    Rectangle rect1(Point(100,100),100,100);
    rect1.set_fill_color(Color::white);
    win.attach(rect1);

    Rectangle rect2(Point(200,100),100,100);
    rect2.set_fill_color(Color::red);
    win.attach(rect2);

    Rectangle rect3(Point(300,100),100,100);
    rect3.set_fill_color(Color::white);
    win.attach(rect3);

    Rectangle rect4(Point(100,200),100,100);
    rect4.set_fill_color(Color::red);
    win.attach(rect4);

    Rectangle rect5(Point(200,200),100,100);
    rect5.set_fill_color(Color::white);
    win.attach(rect5);

    Rectangle rect6(Point(300,200),100,100);
    rect6.set_fill_color(Color::red);
    win.attach(rect6);

    Rectangle rect7(Point(100,300),100,100);
    rect7.set_fill_color(Color::white);
    win.attach(rect7);

    Rectangle rect8(Point(200,300),100,100);
    rect8.set_fill_color(Color::red);
    win.attach(rect8);

    Rectangle rect9(Point(300,300),100,100);
    rect9.set_fill_color(Color::white);
    win.attach(rect9);

    win.wait_for_button();
}

void ex05(Simple_window& win)
{
    Rectangle rect(Point(100, 100), (x_max() / 3) * 2, (y_max() / 4) * 3);
    rect.set_color(Color::black);

    Rectangle frame(Point(50, 50), (x_max() / 3) * 2 + 100, (y_max() / 4) * 3 + 100);
    frame.set_style(Line_style(Line_style::solid, 30));
    frame.set_color(Color::red);

    win.attach(rect);
    win.attach(frame);

    win.wait_for_button();
}


void ex06(Simple_window& win)
{
    Rectangle rec(Point(100,100),1500,800);
    win.attach(rec);
    win.wait_for_button();
}


void ex07(Simple_window& win)
{
    Line_style house_style(Line_style::solid,4);

    Rectangle house(Point(100,370),640,330);
    house.set_style(house_style);
    house.set_fill_color(Color::red);
    win.attach(house);

    Rectangle door(Point(370,500),100,200);
    door.set_style(house_style);
    door.set_fill_color(Color::dark_magenta);
    win.attach(door);

    Rectangle win1(Point(210,525),50,75);
    win1.set_style(house_style);
    win1.set_fill_color(Color::cyan);
    win.attach(win1);

    Rectangle win2(Point(580,525),50,75);
    win2.set_style(house_style);
    win2.set_fill_color(Color::cyan);
    win.attach(win2);

    Polygon roof;
    roof.add(Point(50,370));
    roof.add(Point(420,270));
    roof.add(Point(790,370));
    roof.set_style(house_style);
    roof.set_fill_color(Color::dark_red);
    win.attach(roof);

    Graph_lib::Polygon chimney;
    chimney.add(Point(590,250));
    chimney.add(Point(620,250));
    chimney.add(Point(620,324));
    chimney.add(Point(590,316));
    chimney.set_style(house_style);
    chimney.set_fill_color(Color::dark_magenta);
    win.attach(chimney);

    win.wait_for_button();
}


void ex08(Simple_window& win)
{
    Circle c0(Point(150, 200), 50);
    c0.set_color(Color::blue);
    Circle c1(Point(230, 200), 50);
    c1.set_color(Color::black);
    Circle c2(Point(310, 200), 50);
    c2.set_color(Color::red);
    Circle c3(Point(190, 280), 50);
    c3.set_color(Color::green);
    Circle c4(Point(270, 280), 50);
    c4.set_color(Color::yellow);

    win.attach(c0);
    win.attach(c1);
    win.attach(c2);
    win.attach(c3);
    win.attach(c4);

    win.wait_for_button();
}


void ex09(Simple_window& win)
{
    win.resize(640,480);

    Image img(Point(50,50),"kitten.jpg");
    win.attach(img);
    win.set_label("Cat in a hat");

    Text txt(Point(50,280),"This is a very cute cat");
    win.attach(txt);

    win.wait_for_button();
}

int main()
try {
      Point p(100,100);
      Simple_window win(p,1400,800,"My window");
      //ex01(win);
      //ex02(win);
      //ex03(win);
      //ex04(win);
      //ex05(win);
      //ex06(win);
      ex07(win);
      //ex08(win);
      //ex09(win);


}
catch (exception& e) {
    cerr << "exception: " << e.what() << endl;
    keep_window_open();
}
catch (...) {
    cerr << "exception\n";
    keep_window_open();
}