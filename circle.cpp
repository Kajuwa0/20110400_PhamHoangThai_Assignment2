#include <iostream>
#include <cmath> // Thư viện cho các phép toán
using namespace std;
class Circle {
public:
    double radius;
    string color;
    double circumference() {
        return 2 * M_PI * radius;
    }
    double area() {
        return M_PI * radius * radius;
    }
    void validradius(){ 
        if(radius <= 0){
            cout<<"Bán kính không hợp lệ."<<endl;
        }
    }
    void displaycolor() {
        cout << "Màu sắc hình tròn: " << color << endl;
    }
};

int main() {
    Circle circle1;
    cout << "Nhập bán kính hình tròn: ";
    cin >> circle1.radius;
    circle1.validradius();
    cout << "Chu vi hình tròn: " << circle1.circumference() << " đơn vị" << endl;
    cout << "Diện tích hình tròn: " << circle1.area() << " đơn vị vuông" << endl;
    circle1.color = "Đỏ";
    circle1.displaycolor();
    return 0;
}
