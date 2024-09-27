#include <cwchar>
#include <iomanip>
#include <iostream>
#include <string>
using namespace std;

void printVoidFunc() {
  cout << "This is void func, no value and != javascript, It will return "
          "nothing not even undefined"
       << endl;
}

int main() {
  string name = "john";
  int age = 20;
  float gpa = 4.5;
  double PI = 3.14159265358979323846;
  char nickName = 'J';
  wchar_t hebrewChar = L'ם';
  bool HaveGF = false;
  // char16_t ch16 = u'A'; // Ký tự 'A' trong UTF-16
  // char32_t ch32 = U'A'; // Ký tự 'A' trong UTF-32

  cout << setprecision(20);
  cout << "hello world" << endl;
  cout << "Name:" << name << endl;
  cout << "Age: " << age << endl;
  cout << "GPA: " << gpa << endl;
  cout << "PI: " << PI << endl;
  cout << "NickName: " << nickName << endl;
  wcout << "HebrewChar: " << hebrewChar << endl;
  cout << "HaveGF: " << HaveGF << endl;
  cout << "HaveGF: " << (HaveGF ? "true" : "false") << endl;
  // wcout << "char16_t: " << ch16 << endl;
  // wcout << "char32_t: " << ch32 << endl;
  return 0;
}
