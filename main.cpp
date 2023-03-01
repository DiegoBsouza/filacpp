#include <iostream>
#include <locale.h>

using namespace std;

class Fila {
    public:
        int* elementos;
        int tamanho;
        int inicio;
        int fim;

        Fila(int tamanho) {
            this->tamanho = tamanho;
            elementos = new int[tamanho];
            inicio = 0;
            fim = 0;
        }

        // Verifica se a fila está cheia
        bool cheia() {
            return fim == tamanho;
        }

        // Verifica se a fila está vazia
        bool vazia() {
            return inicio == fim;
        }

        // Insere um novo elemento na fila
        void inserir(int elemento) {
            if (cheia()) {
                cout << "A fila está cheia." << endl;
                return;
            }

            elementos[fim] = elemento;
            fim++;

            cout << "Elemento " << elemento << " inserido na fila." << endl;
        }

        // Remove o primeiro elemento da fila
        void remover() {
            if (vazia()) {
                cout << "A fila está vazia." << endl;
                return;
            }

            int elemento = elementos[inicio];
            inicio++;

            cout << "Elemento " << elemento << " removido da fila." << endl;
        }
};

int main() {
    setlocale(LC_ALL, "portuguese");

    Fila fila(3);

    fila.inserir(1);
    fila.inserir(2);
    fila.inserir(3);
    fila.inserir(4);

    fila.remover();
    fila.remover();
    fila.remover();
    fila.remover();

    return 0;
}
