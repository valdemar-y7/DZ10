#include "human.h"

int main()
{
    Student vladimir("Yudin", "Vladimir", "Michailovich", 18, true);
    Boss karpov("Karpov", "Dmitrii", "Anatolievich", 46, 28);
    vladimir.print();
    cout << endl;
    karpov.print();
}
