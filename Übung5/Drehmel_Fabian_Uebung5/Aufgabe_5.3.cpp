//#include <iostream>
//using namespace std;
//
//template <typename T>
//struct Element {
//  T value;
//  Element *next;
//  Element(T v, Element *n)
//   : value(v), next(n) { }
//};
//template <typename T>
//void insert(Element<T>* &rp, T v) {
//  if (rp != NULL) {
//    if (v > rp->value)     // Sortieren
//      insert(rp->next, v); // Rekursion
//    else rp=new Element<T>(v, rp);
//  }
//  else rp=new Element<T>(v, NULL);
//}
//
//bool fpInt(int e1, int e2){
//    return (e1 < e2);
//}
//
//template <typename T>
//void insert(Element<T>* &rp, T v, bool(*fp_p)) {
//    if (rp != NULL) {
//        if (fp(v,rp)->value)     // Sortieren
//            insert(rp->next, v); // Rekursion
//        else rp=new Element<T>(v, rp);
//    }
//    else rp=new Element<T>(v, NULL);
//}
//
//template <typename T>
//void remove(Element<T>* &rp, int v) {
//  if (rp != NULL) {
//    if (rp->value == v) {
//        Element<T> *tmp=rp;
//      rp = rp->next;
//      delete tmp;
//      remove(rp, v);
//    }
//    else remove(rp->next, v);// Rekursion
//  }
//}
//
//template <typename T>
//void print(Element<T> *p) {
//  while(p) {
//    std::cout << p->value << " ";
//    p=p->next;
//  }
//  std::cout << std::endl;
//}
//
//int main(void) {
//
//    bool (*fp_p)(Element<T>, Element<T>);
//  Element<int> * head = NULL;
//  insert(head, 2, fpInt());
//  insert(head, 5);
//  insert(head, 1);
//  print(head);
//
//  remove(head, 2);
//  print(head);
//}
//
