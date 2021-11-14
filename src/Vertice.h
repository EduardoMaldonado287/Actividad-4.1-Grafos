class Vertice
{
public:
    Vertice(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
        this->id = id;
    }
    
    Vertice(int data, Vertice *next, Vertice *prev)
    { 
        this->data = data;
        this->next = next;
        this->prev = prev;
        this->id = id;
    }

    int getData()
    {
        return data;
    }

    int getId()
    {
        return this->id;
    }

    void setId(int newId)
    {
        this->id = newId;
    }

    Vertice *getNext()
    {
        return next;
    }

    Vertice *getPrev()
    {
        return prev;
    }

    void setData(int data)
    {
        this->data = data;
    }

    void setNext(Vertice *next)
    {
        this->next = next;
    }

    void setPrev(Vertice *prev)
    {
        this->prev = prev;
    }

private:
    int data;
    int id;
    Vertice *next;
    Vertice *prev;
};

