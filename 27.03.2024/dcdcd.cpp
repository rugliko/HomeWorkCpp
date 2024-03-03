

#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "");
    //zadacha1
   // unsigned char x;
   // cin >> x;
   // if (x >= '0' && x <= '9'){ cout << "цифра"; }
   //     
   // else if (x >= 'A' && x <= 'Z'){ cout << cout << "Английская заглавная буква"; }
  //     
  //  else if (x >= 'a' && x <= 'z')
  //  {
  //       cout << "Английская строчная буква";
  //  }
  //  else if (x >= 'А' && x <= 'Я' || x == 'Ё')
  //  {
  //       cout << "Русская заглавная буква";
  //  }
  //  else if (x >= 'а' && x <= 'я' || x == 'ё')
  //  {
  //       cout << "Русская строчная буква";
  //  }
  //  else
  //  {
  //      cout << "Знак";
  //  }
  // //zadacha2
  //  int min, op,price=0;
  //  cout << "введите длительность разговора" << endl;
  //  cin >> min;
  //  cout << "выберите с какого на какой оператор будет выполнен звонок" << endl << "1-мтс-tele2" << endl << "2-biline-yota" << endl << "3-megaphone-мтс" << endl;
  //  cin >> op;
  //  if (op = 1) {
  ///      price += 17;
  //  }
  //  if (op = 2) {
  //      price += 10;
  //  }
  //  if (op = 2) {
  //      price += 8;
  //  }
  //  cout << "цена разговора = " << min * price;
  // zadacha 3.1
   // int salary, opozdania,str;
   // cin >> salary;
   // cin >> opozdania;
   // while (opozdania >= 3) {
   //    salary += 20;
   //    opozdania -= 3;
  //  }
  // str = salary * 2;
 //   cout << str;
    //zadacha3.2
    //int str, salary,opozdania=0;
    //cin >> str;
  // cin >> salary;
   // opozdania = ((str / 2 - salary) / 20) * 3;
   // cout << opozdania;
    //zadacha3.3
    int salary=0, str, opozdania;
    cin >> str;
    cin >> opozdania;
    salary = str / 2;
    while (opozdania >= 3) {
        salary -= 20;
        opozdania -= 3;


    }
    if (salary <= 0) {
        cout << "васе не заплатят ";
    }
    cout << salary;
    



}

