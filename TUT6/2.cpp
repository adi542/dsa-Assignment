void displayWithRepeat(CLL::Node* head) {
    if (!head) return;
    CLL::Node *t = head;
    do {
        cout << t->data << " ";
        t = t->next;
    } while (t != head);
    cout << head->data; // repeat head
}