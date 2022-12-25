#include <iostream>
#include <algorithm>

template <typename T>
class DynamicList {
public:
    DynamicList() : head_(nullptr), tail_(nullptr), size_(0) {}

    void Response(const T& value) {
        Node* new_node = new Node(value);
        if (tail_) {
            tail_->next = new_node;
            new_node->prev = tail_;
            tail_ = new_node;
        }
        else {
            head_ = tail_ = new_node;
        }
        ++size_;
    }

    void Comeback() {
        if (tail_) {
            Node* old_tail = tail_;
            tail_ = old_tail->prev;
            if (tail_) {
                tail_->next = nullptr;
            }
            else {
                head_ = nullptr;
            }
            delete old_tail;
            --size_;
        }
    }

    void PushFront(const T& value) {
        Node* new_node = new Node(value);
        if (head_) {
            head_->prev = new_node;
            new_node->next = head_;
            head_ = new_node;
        }
        else {
            head_ = tail_ = new_node;
        }
        ++size_;
    }

    void PopFront() {
        if (head_) {
            Node* old_head = head_;
            head_ = old_head->next;
            if (head_) {
                head_->prev = nullptr;
            }
            else {
                tail_ = nullptr;
            }
            delete old_head;
            --size_;
        }
    }

    void Insert(int index, const T& value) {
        if (index == 0) {
            PushFront(value);
        }
        else if (index == size_) {
            Response(value);
        }
        else {
            Node* current = head_;
            for (int i = 0; i < index - 1; ++i) {
                current = current->next;
            }
            Node* new_node = new Node(value, current, current->next);
            current->next->prev = new_node;
            current->next = new_node;
            ++size_;
        }
    }

    void Deleter(int index) {
        if (index == 0) {
            PopFront();
        }
        else if (index == size_ - 1) {
            Comeback();
        }
        else {
            Node* current = head_;
            for (int i = 0; i < index; ++i) {
                current = current->next;
            }
            current->prev->next = current->next;
            current->next->prev = current->prev;
            delete current;
            --size_;
        }
    }

    int Find(const T& value) const {
        int index = 0;
        Node* current = head_;
        while (current) {
            if (current->value == value) {
                return index;
            }
            current = current->next;
            ++index;
        }
        return -1; 
    }


    T& operator[](int index) {
        Node* current = head_;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->value;
    }


    const T& operator[](int index) const {
        Node* current = head_;
        for (int i = 0; i < index; ++i) {
            current = current->next;
        }
        return current->value;
    }


    int Size() const { return size_; }
    void Print() const {
        Node* current = head_;
        while (current) {
            std::cout << current->value << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

private:
    class Node {
    public:
        Node(const T& value, Node* prev = nullptr, Node* next = nullptr)
            : value(value), prev(prev), next(next) {}
        T value;
        Node* prev;
        Node* next;
    };

    Node* head_;
    Node* tail_;
    int size_;
};

int main() {
    DynamicList<int> list;

    list.Response(1);
    list.Response(2);
    list.Response(3);
    list.PushFront(0);
    list.Print(); // prints 0 1 2 3

    list.Insert(2, 5);
    list.Print(); // prints 0 1 5 2 3

    list.Deleter(1);
    list.Print(); // prints 0 5 2 3

    std::cout << list.Find(5) << std::endl; // prints 1
    std::cout << list.Find(4) << std::endl; // prints -1

    std::cout << list[0] << std::endl; // prints 0
    std::cout << list[1] << std::endl; // prints 5
    list[1] = 10;
    std::cout << list[1] << std::endl; // prints 10

    return 0;
}