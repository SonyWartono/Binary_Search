#include <cstddef>
class Node{
	
	public:
		int value; // data value
		Node *next; // pointer untuk node selanjutnya
		
		Node(){ //constructor sebuah method,yang dipanggil pertama kali pada saat objek itu dibuat
			next = NULL;
		}
		
};
class LinkedList{
	

	
	//operasi yang bisa kita lakukan di linkedlist
	public: 
		Node *head;
		Node *tail;
	void insertToHead(int);
	void insertToTail(int);
	void insertAfter(int, int); // data, diinsert setelah node int
	
	
	void deleteToHead();
	void deleteToTail();
	void deleteByValue(int);
	
	//untuk memastikan bahwa Linkedlist itu kosong
	void printAll();
	LinkedList() {
		
		head = tail = NULL;
		
	}
};
