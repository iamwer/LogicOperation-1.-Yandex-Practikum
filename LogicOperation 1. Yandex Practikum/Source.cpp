/*У Марты потерялся кот Маркиз. Прохожий сказал ей, что видел похожего кота у одного из трёх домов около почтового отделения.
На вопрос, у какого из домов он видел Маркиза, прохожий может вспомнить цвет дома, а также количество этажей в доме.
Возможна ситуация, когда прохожий забыл часть информации или вообще всё.
Напишите программу, которая на основе показаний прохожего помогает принять Марте решение, в какие из трёх домов нужно зайти.*/


#include <iostream>
#include <string>

using namespace std;

int main() {
    string color1, color2, color3, color4;
    int numb1, numb2, numb3, numb4;
    cin >> color1 >> numb1 >> color2 >> numb2 >> color3 >> numb3 >> color4 >> numb4;
    if (((color1 == color4) && (numb1 == numb4)) || ((color1 == color4) && (numb4 == -1)) || ((color4 == "?"s) && (numb4 == -1)) || ((color4 == "?"s) && (numb1 == numb4))) 
    {
        cout << 1 << endl;
    } 
    if (((color2 == color4) && (numb2 == numb4)) || ((color2 == color4) && (numb4 == -1)) || ((color4 == "?"s) && (numb4 == -1)) || ((color4 == "?"s) && (numb2 == numb4))) 
    {
        cout << 2 << endl;
    } 
    if (((color3 == color4) && (numb3 == numb4)) || ((color3 == color4) && (numb4 == -1)) || ((color4 == "?"s) && (numb4 == -1)) || ((color4 == "?"s) && (numb3 == numb4))) 
    {
        cout << 3 << endl;
    }
    return 0;
}