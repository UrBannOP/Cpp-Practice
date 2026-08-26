#include <iostream>

int main()
{

     int size, total = 0, temp, grade;
     std::cout << "Enter the number of subjects: ";
     std::cin >> size;

     for (int i = 0; i < size; i++)
     {
          std::cout << "Enter grade #" << i + 1 << ": ";
          std::cin >> temp;
          total += temp;
     }
     grade = total / (size * 10);

     switch (grade)
     {
     case 9:
          std::cout << "Grade A+";
          break;
     case 8:
          std::cout << "Grade A";
          break;
     case 7:
          std::cout << "Grade B";
          break;
     case 6:
          std::cout << "Grade C";
          break;
     case 5:
          std::cout << "Grade D";
          break;
     case 4:
          std::cout << "Grade E";
          break;
     default:
          std::cout << "Fail!!";
          break;
     }

     return 0;
}