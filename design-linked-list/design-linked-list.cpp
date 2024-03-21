class MyLinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

    Node* head;

public:
    MyLinkedList() : head(nullptr) {}

    int get(int index) {
        Node* curr = head;
        int curridx = 0;
        while (curr != nullptr && curridx < index) {
            curr = curr->next;
            curridx++;
        }
        if (curr == nullptr) return -1; // Index out of bounds
        return curr->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        if (head == nullptr) {
            head = newNode;
            return;
        }
        Node* curr = head;
        while (curr->next != nullptr) {
            curr = curr->next;
        }
        curr->next = newNode;
    }

    void addAtIndex(int index, int val) {
        if (index == 0) {
            addAtHead(val);
            return;
        }
        Node* newNode = new Node(val);
        Node* curr = head;
        int curridx = 0;
        while (curr != nullptr && curridx < index - 1) {
            curr = curr->next;
            curridx++;
        }
        if (curr == nullptr) return; // Index out of bounds
        newNode->next = curr->next;
        curr->next = newNode;
    }

    void deleteAtIndex(int index) {
        if (head == nullptr) return;
        if (index == 0) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
        }
        Node* curr = head;
        int curridx = 0;
        while (curr != nullptr && curridx < index - 1) {
            curr = curr->next;
            curridx++;
        }
        if (curr == nullptr || curr->next == nullptr) return; // Index out of bounds
        Node* temp = curr->next;
        curr->next = temp->next;
        delete temp;
    }
};
