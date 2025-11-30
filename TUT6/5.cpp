bool isCircular(CLL::Node* head) {
    if (!head) return true;
    CLL::Node* t = head->next;
    while (t && t != head) t = t->next;
    return (t == head);
}