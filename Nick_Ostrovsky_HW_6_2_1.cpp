

#include <iostream>
class smartArray
{
private:
    int asize;
    int* array;
    public:

        smartArray(int size) 
        {
            asize = size;
            array = new int[asize];
        
        };
        ~smartArray()
        {
            delete[] array;
        
        }

        void elementValue(int index, int value)
        {
            if ((index > asize))

            {
                throw 5 ;
            }
            array[index] = value;
        
        }
        int getElement(int index) 
        {
            if ((index < 0)  && (index >= asize))

            {
                throw  "Out of range." ;
            }
            return array[index];
        }
};

int main()
{
    smartArray a(10);
   /* for (int i = 0; i < 10; i++)
    {
        a.elementValue(i, i);
    }
    for (int i = 0; i < 10; i++)
    {
       std::cout <<"Array element (index): " << "(" << i << ") " << a.getElement(i) << std::endl;
    }*/
    try
    {
        a.elementValue(20, 20);
        std::cout << a.getElement(20) << std::endl;
    }
    catch (int error) { std::cout << error << std::endl; };
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
