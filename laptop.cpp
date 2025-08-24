#include <iostream>
using namespace std;

class Laptop {
public:
    string brand;
    string model;
    int ram;      // Dung lượng RAM tính bằng GB
    int storage;  // Dung lượng ổ cứng tính bằng GB
    string gpu;   // card đồ họa
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "RAM: " << ram << " GB" << endl;
        cout << "Storage: " << storage << " GB" << endl;
    }

    void checkRAM(int requiredRAM) {
        if (ram >= requiredRAM) {
            cout << "This laptop has enough RAM to run the software." << endl;
        } else {
            cout << "This laptop does not have enough RAM to run the software." << endl;
        }
    }

    void checkGPU() {
        // Giả sử các GPU mạnh là "RTX", "GTX", "RX", "Arc"
        if (gpu.find("RTX") != string::npos || gpu.find("GTX") != string::npos ||
            gpu.find("RX") != string::npos || gpu.find("Arc") != string::npos) {
            cout << "This laptop has a powerful GPU for gaming." << endl;
        } else {
            cout << "This laptop does not have a powerful GPU for gaming." << endl;
        }
    }

    void upgradeRAM(int additionalRAM) {
        ram += additionalRAM;
        cout << "RAM has been upgraded. New RAM: " << ram << " GB" << endl;
    }
};

int main() {
    Laptop laptop1;
    laptop1.brand = "Dell";
    laptop1.model = "XPS 13";
    laptop1.ram = 8;
    laptop1.storage = 256;

    laptop1.displayInfo();

    // Kiểm tra xem laptop có đủ RAM để chạy phần mềm yêu cầu 16GB RAM
    laptop1.checkRAM(16);
    laptop1.checkGPU(); //kiểm tra GPU laptop có đủ chơi game hay không
    laptop1.upgradeRAM(8); //nâng cấp ram laptop
    laptop1.checkRAM(16); //kiểm tra xem đã đủ RAM sau khi nâng cấp chưa
    return 0;
}
