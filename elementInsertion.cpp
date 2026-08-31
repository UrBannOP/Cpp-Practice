#include <iostream>

int main()
{

     int size, elem, pos;

     std::cout << "Enter The size of the array: ";
     std::cin >> size;

     int *data = NULL;
     data = new int[size + 1];
     for (int i = 0; i < size; i++)
     {
          std::cout << "Element #" << i + 1 << ": ";
          std::cin >> data[i];
     }
     std::cout << "Enter the element to be inserted: ";
     std::cin >> elem;
     std::cout << "Enter the postion where element needs to be inserted: ";
     std::cin >> pos;

     for (int i = size - 1; i >= pos - 1; i--)
     {
          data[i + 1] = data[i];
     }

     data[pos - 1] = elem;

     for (int i = 0; i < size + 1; i++)
     {
          std::cout << data[i] << " ";
     }

     return 0;
}