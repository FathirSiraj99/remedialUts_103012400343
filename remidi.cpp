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

void panenBulanan(list L) {
    address p = L.first;
    address q;
    bool sudahAda;

    if (p == NULL) {
        cout << "Tidak ada data panen" << endl;
        return;
    }

    while (p != NULL) {
        sudahAda = false;

        q = L.first;
        while (q != p) {
            if (q->info.bulanPanen == p->info.bulanPanen) {
                sudahAda = true;
            }
            q = q->next;
        }

        if (!sudahAda) {
            cout << p->info.bulanPanen << " : ";

            q = L.first;
            while (q != NULL) {
                if (q->info.bulanPanen == p->info.bulanPanen) {
                    cout << q->info.namaTanaman << " ";
                }
                q = q->next;
            }
            cout << endl;
        }

        p = p->next;
    }
}

