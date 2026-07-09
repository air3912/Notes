#include<iostream>
using namespace std;

const double PI = 3.1415926;

class Shape {
	public:
		virtual void draw() = 0;
		// virtual ~Shape()  {};
};

class Shape2D:public virtual Shape {
	public:
		static int count;
		virtual float getArea() = 0;
		virtual float getPerimeter() = 0; 
};

int Shape2D::count = 0;

class Circle:public virtual Shape2D {
	public:
		Circle(float r=1):r(r) {count++;};
		void draw() {
			cout << "Circle, r = " << r << endl;
		}
		float getArea() {
			return PI * r * r;
		}
		float getPerimeter(){
			return 2 * PI * r;
		}
		~Circle() {
			count--;
			cout << "Circle desctructed" << endl;
		}
	private:
		float r;
};

class Rectangle:public virtual Shape2D {
	public:
		Rectangle(float w=1,float h=1):width(w),height(h) {count++;};
		void draw() {
			cout << "Rectangle, width = " << width 
			<< " height =" << height << endl;
		}
		float getArea() {
			return width * height;
		}
		float getPerimeter(){
			return 2 * (width + height);
		}
		~Rectangle() {
			count--;
			cout << "Rectangle desctructed" << endl;
		}
	private:
		float width;
		float height;
};

int main() {
	Shape2D *c1 = new Circle();
	
	//EX: 请取消下面的注释，编译。根据编译提示，消除编译错误。
	// 再运行，请问结果对吗？ 为什么？ 
	Shape2D *r1 = new Rectangle(2,3);
	cout << "the rect's area is " << r1->getArea() << endl;
	delete dynamic_cast<Rectangle*>(r1);

	cout << "the number of Shape2Ds is " << Shape2D::count << endl;
	delete dynamic_cast<Circle*>(c1);
}
