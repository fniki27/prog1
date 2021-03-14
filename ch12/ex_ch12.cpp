#include "Simple_window.h"
#include "Graph.h"

int main()try{
    using namespace Graph_lib;
    Point tl{100,100};
	
    //---1.feladat---
    Simple_window win1{tl,600,800,"ex1"};
    Rectangle rec(Point(100,100),150,50);
    rec.set_color(Color::blue);
    win1.attach(rect);

    Polygon polyg;
    polyg.add(Point(100,250));
    polyg.add(Point(250,250));
    polyg.add(Point(250,300));
    polyg.add(Point(100,300));
    polyg.set_color(Color::red);
    win1.attach(polyg);
    rec.move(0,150);
    poly.move(0,150);
	
    win1.wait_for_button();

    //---2.feladat---
    Simple_window win2{tl,600,800,"ex2"};
    Rectangle rect{Point{150,150},100,50};
    Text t{Point{170,180},"Hi"};
    win2.attach(rec2);
    win2.attach(t);
    rect.move(0,150);
    t.move(0,150);
	
    win2.wait_for_button();
    
    //---3.feladat---
    Simple_window win3{tl,600,800,"ex3"};
    Text f(Point(200, 250), "F");
    f.set_color(Color::dark_magenta);
    f.set_font_size(150);

    Text n(Point(300, 250), "N");
    n.set_color(Color::dark_red);
    n.set_font_size(150);

    win3.attach(f);
    win3.attach(n);

    win3.wait_for_button();
   
	
    //---4.feladat---
    Simple_window win4{tl,600,800,"ex4"};
    Rectangle rect1(Point(100,100),100,100);
    rect1.set_fill_color(Color::white);
    win4.attach(rect1);

    Rectangle rect2(Point(200,100),100,100);
    rect2.set_fill_color(Color::red);
    win4.attach(rect2);

    Rectangle rect3(Point(300,100),100,100);
    rect3.set_fill_color(Color::white);
    win4.attach(rect3);

    Rectangle rect4(Point(100,200),100,100);
    rect4.set_fill_color(Color::red);
    win4.attach(rect4);

    Rectangle rect5(Point(200,200),100,100);
    rect5.set_fill_color(Color::white);
    win4.attach(rect5);

    Rectangle rect6(Point(300,200),100,100);
    rect6.set_fill_color(Color::red);
    win4.attach(rect6);

    Rectangle rect7(Point(100,300),100,100);
    rect7.set_fill_color(Color::white);
    win4.attach(rect7);

    Rectangle rect8(Point(200,300),100,100);
    rect8.set_fill_color(Color::red);
    win4.attach(rect8);

    Rectangle rect9(Point(300,300),100,100);
    rect9.set_fill_color(Color::white);
    win4.attach(rect9);

    win4.wait_for_button();
	
	
    //---5.feladat---
    Simple_window win5{tl,900,1000,"ex5"};
    Rectangle rct(Point(100, 100), (x_max() / 3) * 2, (y_max() / 4) * 3);
    rct.set_color(Color::black);

    Rectangle frame(Point(50, 50), (x_max() / 3) * 2 + 100, (y_max() / 4) * 3 + 100);
    frame.set_style(Line_style(Line_style::solid, 30));
    frame.set_color(Color::red);

    win5.attach(rct);
    win5.attach(frame);
	
    win5.wait_for_button();
	
    //---6/1.feladat---
    Simple_window win6{tl,600,400,"ex6"};
    Rectangle rec6{Point{0,0},1000,1000};
    win6.attach(rec6);
	
    win6.wait_for_button(); //Nem lesz látható az alakzat, mert az ablakon kívülre esik. Hogy látható legyen, ahhoz meg kell nagyobbítani a képernyőt.
	
	
    //----6/2.feladat----
    Simple_window win6{tl,2000,2000,"ex6"};
    Rectangle r6{Point{200,200},600,300};
    win6.attach(r6);
    win6.wait_for_button(); //Nem tudunk olyan ablakot csinálni, ami nagyobb a képernyőnknél, mert a program a mi képernyőnkhöz igazítja az ablakot.
	
	
    //---7.feladat---
    Simple_window win7{tl,600,400,"ex7"};
    Line_style house_style(Line_style::solid,4);

    Rectangle house(Point(100,370),640,330);
    house.set_style(house_style);
    house.set_fill_color(Color::red);
    win7.attach(house);

    Rectangle door(Point(370,500),100,200);
    door.set_style(house_style);
    door.set_fill_color(Color::dark_magenta);
    win7.attach(door);

    Rectangle wind1(Point(210,525),50,75);
    wind1.set_style(house_style);
    wind1.set_fill_color(Color::cyan);
    win7.attach(wind1);

    Rectangle wind2(Point(580,525),50,75);
    wind2.set_style(house_style);
    wind2.set_fill_color(Color::cyan);
    win7.attach(wind2);

    Polygon roof;
    roof.add(Point(50,370));
    roof.add(Point(420,270));
    roof.add(Point(790,370));
    roof.set_style(house_style);
    roof.set_fill_color(Color::dark_red);
    win7.attach(roof);

    Polygon chimney;
    chimney.add(Point(590,250));
    chimney.add(Point(620,250));
    chimney.add(Point(620,324));
    chimney.add(Point(590,316));
    chimney.set_style(house_style);
    chimney.set_fill_color(Color::dark_magenta);
    win7.attach(chimney);

    win7.wait_for_button();
	
	
    //---8.feladat----
    Simple_window win8{tl,700,800,"ex8"};
    Circle c0(Point(150, 200), 50);
    c0.set_color(Color::blue);
    c0.set_style(Line_style(Line_style::solid,12));
    Circle c1(Point(230, 200), 50);
    c1.set_color(Color::black);
    c1.set_style(Line_style(Line_style::solid,12));
    Circle c2(Point(310, 200), 50);
    c2.set_color(Color::red);
    c2.set_style(Line_style(Line_style::solid,12));
    Circle c3(Point(190, 280), 50);
    c3.set_color(Color::green);
    c3.set_style(Line_style(Line_style::solid,12));
    Circle c4(Point(270, 280), 50);
    c4.set_color(Color::yellow);
    c4.set_style(Line_style(Line_style::solid,12));

    win8.attach(c0);
    win8.attach(c1);
    win8.attach(c2);
    win8.attach(c3);
    win8.attach(c4);

    win8.wait_for_button();
    
    
    //---9.feladat---
    Simple_window win9{tl,700,800,"cat");
    Image img(Point(50,50),"kitten.jpg");
    win9.attach(img);
    win9.set_label("Cat in a hat");

    Text txt(Point(50,280),"This is a very cute cat");
    win9.attach(txt);
    win9.wait_for_button();
	
    return 0;
}catch(exception& e){
cerr<<"exception: "<<e.what();
return 1;

}
