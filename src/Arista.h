class Arista{
    public:

    Arista(Vertice *vi, Vertice *vj)
    {
        this->vi = vi;
        this->vj = vj;
        this->next = nullptr;
    }

    Arista(Vertice *vi, Vertice *vj, Arista *next)
    {
        this->vi = vi;
        this->vj = vj;
        this->next = next;
    }
    
    Arista *getNext(){
        return next;
    }

    void setNext(Arista *next)
    {
        this->next = next;
    }

    void setVi(Vertice *new_vi)
    {
        this->vi = new_vi;
    }

    void setVj(Vertice *new_vj)
    {
        this->vj = new_vj;
    }

    void setAristaId(int aristaId)
    {
        this->arista_id = aristaId;
    }

    int getVi()
    {
        return vi->getData();
    }

    int getVj()
    {
        return vj->getData();
    }

    int getAristaId()
    {
        return arista_id;
    }

    private:
    int arista_id;
    Vertice *vi;
    Vertice *vj;
    Arista *next;
};