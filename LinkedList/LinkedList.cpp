#include "iostream"
#include "LinkedList.h"
using namespace std;

//InsertToHead
void LinkedList::insertToHead(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	newNode->next = head;
	head = newNode;
	
	if(tail==NULL)
	tail = head;
	
	
}

//InsertToTail
void LinkedList::insertToTail(int input){
	
	Node *newNode = new Node();
	newNode->value = input;
	
	tail->next = newNode;
	tail = newNode;
	
	
}
//InsertAfter
void LinkedList::insertAfter(int key, int input) {
    Node* newNode = new Node();
    newNode->value = input;

    Node* currentNode = head;
    while (currentNode != NULL && currentNode->value != key) {
        currentNode = currentNode->next;
    }

    if (currentNode == NULL) {
        // Node dengan nilai key tidak ditemukan
        delete newNode;
        return;
    }

    newNode->next = currentNode->next;
    currentNode->next = newNode;
    if (currentNode == tail) {
        tail = newNode;
    }
}
//Delete to Head
void LinkedList::deleteToHead()
{
	if (head==NULL)
	return; //linkedlist kosong
	
	if (head!=NULL)
	{
		Node *tmp = head;
		head = head->next;
		delete tmp;
	}
	
}

//DeleteToTail
void LinkedList::deleteToTail()
{
	if (head==NULL)
	{
		return;
	}
	
	if (tail==head)
	{
		delete head;
		head = NULL;
		tail = NULL;
		return;
	}
	
	if (tail!=head)
	{	
		Node *tmp = head;
		while (tmp->next != tail)
		{
			tmp = tmp->next;
		}
		delete tail;
		tail = tmp;
		tail->next = NULL;
	}
}

//DeleteByValue
void LinkedList::deleteByValue(int input)
{
	Node* tmpdel = NULL;
	Node* tmp = head;

	while (tmp != NULL && tmp->value != input)
	{
		tmpdel = tmp;
		tmp = tmp->next;
 }

	if (tmp != NULL)
	{
		if (tmp == head)
		{
			head = tmp->next;
		}
		else
		{
			tmpdel->next = tmp->next;
		}

		if (tmp == tail)
		{
			tail = tmpdel;
		}

		delete tmp;
	}

}

//PrintAll
void LinkedList::printAll(){
	
	
Node *tmp = head;
while (tmp != NULL)	{
	
	cout << tmp->value << "->";
	
	tmp = tmp->next;
	
}
	
	cout << endl; 
}
