#ifndef BD_H
#define BD_H
class BD{
public:
    void OpenBd(const char* bdName);
    void CloseBd();
    void CreateTables();
    void Insert(int size);
    void Select();
};
#endif BD_H
