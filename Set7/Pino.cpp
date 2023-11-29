#include <vector>
#include <iostream>
#include <list>

using namespace std;
template <typename T>

class Stack
{
public:
    vector<T> juttu;


    void push(const T& asia)
    {
        juttu.push_back(asia);
    }
    T pop()
    {
        T Top = juttu.back;
        juttu.pop_back();
        return Top;
    }

    T size()
    {
        return juttu.size();
    }


};

int main()
{
    //kokonaisluku pino

    Stack<int> kokoLuku;

    kokoLuku.push(1);
    kokoLuku.push(2);
    kokoLuku.push(3);

    
    cout << kokoLuku.size();
}