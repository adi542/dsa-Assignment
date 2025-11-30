bool isPalindromeDLL(DLL::Node* head) {
    if (!head) return true;

    DLL::Node *l = head, *r = head;
    while (r->next) r = r->next;

    while (l != r && r->next != l) {
        if (l->data != r->data) return false;
        l = l->next;
        r = r->prev;
    }
    return true;
}