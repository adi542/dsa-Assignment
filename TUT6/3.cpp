int sizeDLL(DLL::Node* head) {
    int c = 0;
    while (head) { c++; head = head->next; }
    return c;
}

int sizeCLL(CLL::Node* head) {
    if (!head) return 0;
    int c = 0;
    CLL::Node* t = head;
    do {
        c++;
        t = t->next;
    } while (t != head);
    return c;
}