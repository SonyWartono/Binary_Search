#include "LinkedList.h"
#include <iostream>

using namespace std;

void LinkedList::insertToHead(int data) {
    Node *newNode = new Node();
    newNode->value = data;

    if (head == NULL) {
        head = tail = newNode;
    }
    else {
        newNode->next = head;
        head = newNode;
    }
}

void LinkedList::insertToTail(int data) {
    Node *newNode = new Node();
    newNode->value = data;

    if (tail == NULL) {
        head = tail = newNode;
    }
    else {
        tail->next = newNode;
        tail = newNode;
    }
}

void LinkedList::insertAfter(int after, int data) {
    Node *newNode = new Node();
    newNode->value = data;

    Node *currentNode = head;

    while (currentNode != NULL && currentNode->value != after) {
        currentNode = currentNode->next;
    }

    if (currentNode == NULL) {
        cout << "Node dengan value " << after << " tidak ditemukan" << endl;
    }
    else {
        newNode->next = currentNode->next;
        currentNode->next = newNode;
        if (currentNode == tail) {
            tail = newNode;
        }
    }
}

void LinkedList::deleteToHead() {
    if (head == NULL) {
        cout << "Linked list kosong" << endl;
    }
    else if (head == tail) {
        delete head;
        head = tail = NULL;
    }
    else {
        Node *temp = head;
        head = head->next;
        delete temp;
    }
}

void LinkedList::deleteToTail() {
    if (tail == NULL) {
        cout << "Linked list kosong" << endl;
    }
    else if (head == tail) {
        delete head;
        head = tail = NULL;
    }
    else {
        Node *currentNode = head;
        while (currentNode->next != tail) {
            currentNode = currentNode->next;
        }
        currentNode->next = NULL;
        delete tail;
        tail = currentNode;
    }
}

void LinkedList::deleteByValue(int data) {
    if (head == NULL) {
        cout << "Linked list kosong" << endl;
    }
    else if (head->value == data) {
        deleteToHead();
    }
    else {
        Node *currentNode = head;
        while (currentNode->next != NULL && currentNode->next->value != data) {
            currentNode = currentNode->next;
        }
        if (currentNode->next == NULL) {
            cout << "Node dengan value " << data << " tidak ditemukan" << endl;
        }
        else {
            Node *temp = currentNode->next;
            currentNode->next = temp->next;
            if (temp == tail) {
                tail = currentNode;
            }
            delete temp;
        }
    }
}

void LinkedList::printAll() {
    if (head == NULL) {
        cout << "Linked list kosong" << endl;
    }
    else {
        Node *currentNode = head;
        cout << endl << "Head : " << head->value << endl;
        cout << "Tail : " << tail->value << endl;
        cout << "Linked List : " << endl;
        while (currentNode != NULL) {
            cout << currentNode->value << " -> ";
            currentNode = currentNode->next;
        }
        cout << endl;
    }
}