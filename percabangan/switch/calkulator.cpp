# include <iostream>
using namespace std;

int main() {

  char op;
  float num1, num2;

  cout << "Pilih operator: [+]-[-]-[*]-[/] => ";
  cin >> op;

  cout << "isi 2 operands:                 => ";
  cin >> num1 >> num2;

  switch(op) {

    case '+':
      cout << num1 << " + " << num2 << " = " << num1 + num2;
      break;

    case '-':
      cout << num1 << " - " << num2 << " = " << num1 - num2;
      break;

    case '*':
      cout << num1 << " * " << num2 << " = " << num1 * num2;
      break;

    case '/':
      cout << num1 << " / " << num2 << " = " << num1 / num2;
      break;

    default:
    cout << "operan yang kamu masukan salah";
      break;
  }

  return 0;
}