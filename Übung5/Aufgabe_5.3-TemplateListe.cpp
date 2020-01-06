#include <iostream>
using namespace std;

template <typename T>
struct Element {
  T value;
  Element *next;
  Element(T v, Element *n)
   : value(v), next(n) { }
};
template <typename T>
void insert(Element<T>* &rp, T v) {
  if (rp != NULL) {
    if (v > rp->value)     // Sortieren
      insert(rp->next, v); // Rekursion
    else rp=new Element<T>(v, rp);
  }
  else rp=new Element<T>(v, NULL);
}
template<typename T>
bool cmp(T a, T b);

bool cmp(int a, int b) {
    return a <= b;
}

bool cmp(char a, char b) {
    return a >= b;
}

template <typename T>
void insert(Element<T>* &rp, T v, bool(*cmp)(T,T)) {
    if (rp != NULL) {
        if (cmp(v,rp->value)) {     // Sortieren
                insert(rp->next, v, (*cmp));   // Rekursion
        }
        else rp=new Element<T>(v, rp);
    }
    else rp=new Element<T>(v, NULL);
}

template <typename T>
void remove(Element<T>* &rp, int v) {
  if (rp != NULL) {
    if (rp->value == v) {
        Element<T> *tmp=rp;
      rp = rp->next;
      delete tmp;
      remove(rp, v);
    }
    else remove(rp->next, v);// Rekursion
  }
}

template <typename T>
void print(Element<T> *p) {
  while(p) {
    std::cout << p->value << " ";
    p=p->next;
  }
  std::cout << std::endl;
}

int main(void) {
    bool (*sorter)(int,int);
    sorter = cmp;

  Element<int> * head = NULL;
  insert(head, 2, cmp);
  insert(head, 5, cmp);
  insert(head, 1, cmp);
  print(head);

  remove(head, 2);
  print(head);
}

