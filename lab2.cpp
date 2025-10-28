#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // bai 1 double grade;
    // double grade; //ko dung dấu bằng trong double, sử dụng phương pháp delta-epsilon
    // cin >> grade;
    // if (grade < 3.0)
    // {
    //     cout << "F";
    // }
    // else if (grade >= 3.0 && grade < 5.0)
    // {
    //     cout << "D";
    // }
    // else if (grade >= 5.0 && grade < 6.0)
    // {
    //     cout << "C";
    // }
    // else if (grade >= 6.0 && grade < 8.0)
    // {
    //     cout << "B";
    // }
    // else
    // {
    //     cout << "A";
    // }

    // bai 2
    // int number;
    // cin >> number;
    // switch (number)
    // {
    // case 0:
    //     cout << "Zero";
    //     break;
    // case 1:
    //     cout << "One";
    //     break;
    // case 2:
    //     cout << "Two";
    //     break;
    // case 3:
    //     cout << "Three";
    //     break;
    // case 4:
    //     cout << "Four";
    //     break;
    // case 5:
    //     cout << "Five";
    //     break;
    // case 6:
    //     cout << "Six";
    //     break;
    // case 7:
    //     cout << "Seven";
    //     break;
    // case 8:
    //     cout << "Eight";
    //     break;
    // case 9:
    //     cout << "Nine";
    //     break;
    // case 10:
    //     cout << "Ten";
    //     break;
    // default:
    //     cout << "Unknown";
    // }

    // bai 3
    // double a, b, c;
    // cin >> a >> b >> c;
    // double delta, a1 = 0, a2 = 0;
    // delta = b * b - 4 * a * c;

    // if (a == 0 && b != 0)
    // {
    //     a1 = -c / b;
    //     cout << a1;
    // }
    // if (a==0 && b==0)
    // {
    //      //Them truong hop
    // }
    // else if (a != 0 && delta > 0)
    // {
    //     a1 = (-b + sqrt(delta)) / (2 * a);
    //     a2 = (-b - sqrt(delta)) / (2 * a);
    //     cout << a1 << " " << a2;
    // }
    // else if (a != 0 && delta == 0)
    // {
    //     a1 = -b / (2 * a);
    //     cout << a1;
    // }
    // else
    // {
    //     cout << "No Solutions";
    // }

    // bai 4
    double a, b, c;
    bool ss;
    ss = a == b;
    cin >> a >> b >> c;
    cout << ss;

    // bai 9

    return 0;
}