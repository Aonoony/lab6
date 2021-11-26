#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double deg){
    double radiant=deg*M_PI/180;
    return radiant;
} 
double rad2deg(double rad){
    double degree=rad*180/M_PI;
    return degree;
}
double findXComponent(double lex1, double lex2, double radx1, double radx2){
    double compx=lex1*cos(radx1)+lex2*cos(radx2);
    return compx;
}
double findYComponent(double ley1, double ley2, double rady1, double rady2){
    double compy=ley1*sin(rady1)+ley2*sin(rady2);
    return compy;
}
double pythagoras(double Xcomp, double Ycomp){
    double veclenght=sqrt(pow(Xcomp,2)+pow(Ycomp,2));
    return veclenght;
}
void showResult(double veclenght, double degree){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%"<<endl;
    cout<<"Lenght of th resultant vector = "<<veclenght<<endl;
    cout<<"Direction of the resultant vector (deg) = "<<degree<<endl;
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}

int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    showResult(result_vec_length,result_vec_direction);
}