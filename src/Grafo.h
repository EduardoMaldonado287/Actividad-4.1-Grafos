#include "Vertice.h"
#include "Arista.h"
using namespace std;

class Grafo
{
public:
    Grafo()
    {
        this->head = nullptr;
        this->tail = nullptr;
        this->size = 0;
        headArista = nullptr;
    }

    // Adds the specified data in the last position of the list
    void addVertice(int data)
    {
        if (size==0){
            addFirstVertice(data);
        }
        else if (size >= 0)
        {
            Vertice *aux = new Vertice(data, nullptr, tail);
            aux->setId(size + 1);
            tail->setNext(aux);
            tail = aux;
            size ++;
        }

        if (size == 2)
        {
            addFirstArista();
        } 
        else if (size > 2) {
            addArista();
        }
    }

    void addArista()
    {
        Vertice *vj = tail;
        Vertice *vi = tail;
        vi = vi->getPrev();

        Arista *currentArista = headArista;
        while (currentArista -> getNext() != nullptr){
            currentArista = currentArista->getNext();
        }
        
        Arista *newArista = new Arista(vi, vj);
        newArista->setAristaId(size-1);
        currentArista->setNext(newArista);
    }

    void printVertices()
    {
        Vertice *aux = head;
        while (aux != nullptr)
        {
            cout << "Vertice " << aux->getId() << ": " << aux->getData() << endl;
            aux = aux -> getNext();
        }
    }

    void printAristas()
    {
        Arista *auxArista = headArista;

        while (auxArista != nullptr)
        {
            cout << "Arista " << auxArista->getAristaId() << ": (" << auxArista->getVi() << ", " << auxArista->getVj() << ")" << endl;
            auxArista = auxArista->getNext();
        }
    }

    int getSize(){
        return size;
    }
    
    private:
        Vertice *head;
        Vertice *tail;
        Arista *headArista;
        int size;

        // Adds the specified data in the first position of the list
        void addFirstVertice(int data)
        {
            Vertice *aux = new Vertice(data, head, nullptr);
            aux->setId(1);
            if (size==0)
            {
                head = aux;
                tail = aux;
            }
            else
            {
                head->setPrev(aux);
                head = aux;
            }
            size++;
        }

        void addFirstArista()
        {
            Vertice *vj = tail;
            Vertice *vi = tail;
            vi = vi->getPrev();
            
            Arista *newArista= new Arista(vi, vj, headArista);
            headArista = newArista;
            headArista->setAristaId(1);
        }
    };
