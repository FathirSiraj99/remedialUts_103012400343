#ifndef PANEN_SLL_H_INCLUDED
#define PANEN_SLL_H_INCLUDED

using namespace std;

struct tPanen {
    string namaTanaman;
    string bulanPanen;
    int jumlahPanen;
};

typedef tPanen infotype;

typedef struct elmList* address;

struct elmList {
    infotype info;
    address next;
};

struct list {
    address first;
};

void createList(list &L);
address createNewElm(infotype x);
void tambahData(list &L, infotype x);
address panenTerbanyak(list L);
void panenBulanan(list L, string bulan);

#endif
