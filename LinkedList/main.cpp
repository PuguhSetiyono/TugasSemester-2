#include <iostream>
#include "LinkedList.h"

using namespace std;


int main(int argc, char** argv) {
	
	LinkedList list1;
    list1.insertToHead(30);
    list1.insertToHead(35);
    cout << "<<< Insert To Head >>>" << endl; 
    cout << "Head: " << list1.head->value << endl;
    list1.printAll();
    cout<<endl; 
    
 	list1.insertToHead(40);
 	cout << "<<< Hasil >>>" << endl; 
    cout << "Head: " << list1.head->value << endl;
    list1.printAll();
    cout<<endl; 

    LinkedList list2;
    list2.insertToHead(50);
    list2.insertToHead(20);
    cout << " <<< Insert To Tail >>>" << endl; 
    cout << "Head: " << list2.head->value << endl;
    cout << "Tail: " << list2.tail->value << endl;
    list2.printAll();
    cout << endl;
    
    list2.insertToTail(30);
    cout << " <<< Hasil >>>" << endl; 
    cout << "Head: " << list2.head->value << endl;
    cout << "Tail: " << list2.tail->value << endl;
    list2.printAll();
    cout << endl;

    LinkedList list3;
    list3.insertToHead(30);
    list3.insertAfter(30, 40);
    cout << " <<< Insert After >>>"<< endl; 
    cout << "head: " << list3.head->value << endl;
    cout << "Tail: " << list3.tail->value << endl;
    list3.printAll();
    cout << endl; 
    
    list3.insertAfter(40, 50);
    list3.insertAfter(50, 60);
    cout << " <<< Hasil >>>"<< endl; 
    cout << "head: " << list3.head->value << endl;
    cout << "Tail: " << list3.tail->value << endl;
    list3.printAll();
    cout << endl; 
    
    LinkedList list4;
    list4.insertToHead(30);
    list4.insertAfter(30, 40); 
    list4.insertAfter(40, 50);
    list4.insertAfter(40, 60);
    cout << " <<< Delete To Head >>>"<< endl; 
    cout << "head: " << list4.head->value << endl;
    cout << "Tail: " << list4.tail->value << endl;
 	list4.printAll();
    cout << endl;
    
	cout << "<<< Hasil >>> " << endl;
    list4.deleteToHead();
    cout << "head: " << list4.head->value << endl;
    cout << "Tail: " << list4.tail->value << endl;
    list4.printAll();
    cout << endl; 
    
    LinkedList list5;
    list5.insertToHead(40);
    list5.insertAfter(40, 60); 
    list5.insertAfter(60, 70);
    list5.insertAfter(70, 80);
    cout << " <<< Delete To Tail >>>"<< endl; 
    cout << "head: " << list5.head->value << endl;
    cout << "Tail: " << list5.tail->value << endl;
 	list5.printAll();
    cout << endl;
    
	cout << "<<< Hasil >>> " << endl;
    list5.deleteToTail();
    cout << "head: " << list5.head->value << endl;
    cout << "Tail: " << list5.tail->value << endl;
    list5.printAll();
    cout << endl; 
    
    LinkedList list6;
    list6.insertToHead(20);
    list6.insertAfter(20,50); 
    list6.insertAfter(50,60);
    list6.insertAfter(60,70);
    cout << "<<< Delete By Value >>>" << endl; 
    cout << endl;
    cout << "Head: " << list6.head->value << endl;
    cout << "Tail: " << list6.tail->value << endl;
    list6.printAll();
	cout << "<<< Delete By Value (50) >>>" << endl;  
	cout << endl;
	
    cout << "<<< Hasil >>>" << endl; 
    cout << "Head: " << list6.head->value << endl;
    cout << "Tail: " << list6.tail->value << endl;
    list6.deleteByValue(50);
    list6.printAll();
    cout << endl; 
    
	return 0;
}