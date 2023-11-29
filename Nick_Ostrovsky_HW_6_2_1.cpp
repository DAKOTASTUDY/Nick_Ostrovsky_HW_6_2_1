

#include <iostream>
class smartArray
{
private:
    int asize;
    int* array;
    int index;
    public:

        smartArray(int size) 
        {
            asize = size;
            array = new int[2*asize];
        
        };
        ~smartArray()
        {
            delete[] array;
        
        }

        void elementValue(int value)
        {
            int in = 0;
            &index = in++;
            if ((index < 0) && (index >= 2*asize))

            {
                throw std::runtime_error("Error. Index is out of range.");
            }
            array[index] = value;
        
        }
        int getElement(int index) 
        {
            if ((index < 0)  && (index >= 2*asize))

            {
                throw std::runtime_error("Error. Index is of range.");
            }
            return array[index];
        }
};

int main()
{
    smartArray a(10);
    for (int i = 0; i < 21; i++)
    {
        a.elementValue(i);
    }
    for (int i = 0; i < 10; i++)
    {
       std::cout <<"Array element (index): " << "(" << i << ") " << a.getElement(i) << std::endl;
    }
    try
    {
        a.elementValue(20);
        std::cout << a.getElement(20) << std::endl;
    }
    catch (const std::exception& e) { std::cout << e.what(); };
  
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
