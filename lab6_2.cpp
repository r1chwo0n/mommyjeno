#include <iostream>
#include<cmath>

using namespace std;

double deg2rad(double a){
  return a * (M_PI/180) ;
}

double rad2deg(double b){
  return b * (180/M_PI) ;
}

double findXComponent(double L,double M,double N,double O){
  return L*cos(N) + M*cos(O);
}

double findYComponent(double L,double M,double N,double O){
  return L*sin(N) + M*sin(O);
}

double pythagoras(double J,double K){
  return sqrt(pow(J,2) + pow(K,2));
}

void showResult(double W,double N){
  cout << "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
  cout << "Length of the resultant vector = " << W << "\n";
  cout << "Direction of the resultant vector (deg) = " << N;
  cout << "\n%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
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
