#include <iostream>
#include "remidi.h"

using namespace std;

void createList(list &L) {
    L.first = NULL;
}

address createNewElm(infotype x) {
    address p = new elmList;
    p->info = x;
    p->next = NULL;
    return p;
}

void tambahData(list &L, infotype x) {
    address p = createNewElm(x);
    p->next = L.first;
    L.first = p;
}

address panenTerbanyak(list L) {
    if (L.first == NULL) {
        return NULL;
    }

    address max = L.first;
    address p = L.first->next;

    while (p != NULL) {
        if (p->info.jumlahPanen > max->info.jumlahPanen) {
            max = p;
        }
        p = p->next;
    }
    return max;
}

void panenBulanan(list L, string bulan) {
    address p = L.first;
    bool ketemu = false;

    while (p != NULL) {
        if (p->info.bulanPanen == bulan) {
            cout << p->info.namaTanaman << " ";
            ketemu = true;
        }
        p = p->next;
    }

    if (!ketemu) {
        cout << "Tidak ada data panen";
    }
    cout << endl;
}
