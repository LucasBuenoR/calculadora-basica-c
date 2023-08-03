#include <iostream>

using namespace std;

float soma(float num1, float num2)
{
    return num1 + num2;
}

float subtracao(float num1, float num2)
{
    return num1 - num2;
}

float multiplicacao(float num1, float num2)
{
    return num1 * num2;
}

float divisao(float num1, float num2)
{
    return num1 / num2;
}

int main()
{
    cout << "[================================== CALCULADORA ==================================]" << endl
         << endl;

    cout << "[==================================  OPERAÇÕES  ==================================]" << endl
         << endl;

    float num1, num2;
    int op = 0;

    do
    {

        cout << "\t\t\t\t(1) + Soma" << endl
             << "\t\t\t\t(2) - Subtração" << endl
             << "\t\t\t\t(3) * Multiplicação" << endl
             << "\t\t\t\t(4) / Divisão" << endl
             << "\t\t\t\t(0) ! SAIR" << endl
             << endl
             << "\t\t\t\tEscolha uma Operação: ";
        cin >> op;

        cout << "\n";
        cout << "\t\t\t\t";

        if (op == 1)
        {

            cout << "Número 1: ";
            cin >> num1;

            cout << "\t\t\t\t";

            cout << "Número 2: ";
            cin >> num2;

            cout << "\n";

            cout << "\t\t\t\tResultado: " << soma(num1, num2) << "\n\n";
        }

        // cout << "\n";
        // cout << "\t\t\t\t";

        else if (op == 2)
        {

            cout << "Número 1: ";
            cin >> num1;

            cout << "\t\t\t\t";

            cout << "Número 2: ";
            cin >> num2;

            cout << "\n";

            cout << "\t\t\t\tResultado: " << subtracao(num1, num2) << "\n\n";
        }

        // cout << "\n";
        // cout << "\t\t\t\t";
        else if (op == 3)
        {
            cout << "Número 1: ";
            cin >> num1;

            cout << "\t\t\t\t";

            cout << "Número 2: ";
            cin >> num2;

            cout << "\n";

            cout << "\t\t\t\tResultado: " << multiplicacao(num1, num2) << "\n\n";
        }

        // cout << "\n";
        // cout << "\t\t\t\t";
        else if (op == 4)
        {
            cout << "Número 1: ";
            cin >> num1;

            cout << "\t\t\t\t";

            cout << "Número 2: ";
            cin >> num2;

            cout << "\n";

            cout << "\t\t\t\tResultado: " << divisao(num1, num2) << "\n\n";
        }

        else
        {
            cout << "\n\n";
            cout << "\t\t\t\tCalculadora Finalizada... " << "\n";
        }

    } while (op != 0);

    return 0;
}
