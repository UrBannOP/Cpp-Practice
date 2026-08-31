#include <iostream>

int main()
{

     int size;

     std::cout << "Enter The size of the array: ";
     std::cin >> size;

     int *data = NULL;
     data = new int[size + 1];
     for (int i = 0; i < size; i++)
     {
          std::cout << "Element #" << i + 1 << ": ";
          std::cin >> data[i];
     }

     for (int i = 0; i < size; i++)
     {
          std::cout << data[i] << " ";
     }
     std::cout << "\n";

     for (int i = 0; i < size; i++)
     {
          for (int j = i + 1; j < size; j++)
          {
               if (data[i] == data[j])
               {
                    for (int k = j; k < size; k++)
                    {
                         data[k] = data[k + 1];
                    }
                    j--;
                    size -= 1;
               }
          }
     }

     std::cout << "Without any duplicate elements: \n";

     for (int i = 0; i < size; i++)
     {
          std::cout << data[i] << " ";
     }

     delete[] data;
     return 0;
}