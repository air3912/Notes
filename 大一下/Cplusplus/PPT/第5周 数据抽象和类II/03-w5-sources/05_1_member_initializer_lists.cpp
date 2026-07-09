#include<iostream>
#include<cstdio>
#include<string>

struct Vector3 {
    Vector3(double x,double y,double z=0):x(x),y(y),z(z){}
    std::string toString(const char* fmt="(%.2f,%.2f,%.2f)"){
        char buf[1000];
        std::sprintf(buf,fmt,x,y,z); 
        return std::string(buf);
    } 
    
    double x,y,z; 
};

struct Ray {
    Ray (Vector3 origin, Vector3 direction):
       origin(origin),direction(direction) {};
    
    Vector3 origin;     //射线的原点。
    Vector3 direction;	//射线的方向。 
};

int main() {
    Vector3 vo(0,0,0), v(1,1,1);
    Ray ray(vo,v);
    std::cout << ray.direction.toString() << std::endl;
} 
