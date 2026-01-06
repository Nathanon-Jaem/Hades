#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    // แสดงข้อความเริ่มต้น
    cout << "Press Enter 3 times to reveal your future." << endl;
    
    // รับค่า Enter 3 ครั้ง (ใช้ cin.get() เพื่อรอรับการกดปุ่ม)
    cin.get();
    cin.get();
    cin.get();

    // ตั้งค่า seed สำหรับการสุ่มโดยใชเวลาปัจจุบัน
    srand(time(0));
    
    // สุ่มตัวเลข 0-8 (รวม 9 ตัวเลือกตามเกรดที่โจทย์กำหนด)
    int x = rand() % 9;
    string grade;

    if (x == 0) grade = "A";
    else if (x == 1) grade = "B+";
    else if (x == 2) grade = "B";
    else if (x == 3) grade = "C+";
    else if (x == 4) grade = "C";
    else if (x == 5) grade = "D+";
    else if (x == 6) grade = "D";
    else if (x == 7) grade = "F";
    else grade = "W";

    // แสดงผลลัพธ์
    cout << "You will get " << grade << " in this 261102." << endl;

    return 0;
}
