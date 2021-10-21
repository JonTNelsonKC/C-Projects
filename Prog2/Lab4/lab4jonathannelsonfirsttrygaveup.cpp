//Name: Jonathan Nelson
//Assignment: Data Structures Lab 4
//Date: September 16, 2021
/*
After understanding the code write a driver program for itemType and UnsortedType classes. 
The driver program can all be in the main except a printList function called to print the linked list which you must write.
Your driver should use every member function of the class UnsortedType at least twice. 
Your drive should use input from the user for the list and print out informative messages to the user about the list. 
It should also print out messages to tell all the cases that it is testing. 
All allocated memory must be de-allocated by the driver program prior to the end of the program.
*/

#include <iostream>

#include "unsorted.h"

using namespace std;

int main()
{

  UnsortedType list; //creates an instance of the unsorted class called list

  cout << "\n\nWelcome to the list manipulation program.\n\n\tThis program is designed to allow the user to manipulate data in a simple list, enjoy.\n\n\tTo begin, choose from one of the options below:\n";

  int userInput = 0;

  while (userInput != 5)
  {

    cout << "\n\nEnter a value to decide from the following options:\n\n1: Enter an item to store\n2: State the length of the list\n3: Delete an item\n4: Empty the list\n5: End the program\n\n";

    cin >> userInput;

    int storeItem = 1;

    ItemType item; //creates an instance of the ItemType class called item

    switch (userInput)
    {
    case 1:
      cout << "\nEnter a number between 1-9 to store.\n";
      while (storeItem != 0)
      {
        cin >> storeItem;
        item.Initialize(storeItem);
        list.PutItem(item);
        cout << "Item stored, enter another number or enter 0 to stop adding items.";
      }
      break;

    case 2:
      list.GetLength();
      break;

    case 3:
      list.DeleteItem(item);
      break;

    case 4:
      list.MakeEmpty(); //1st use of MakeEmpty, invokes MakeEmpty function which clears the list and prints "list is empty"
      cout << "\n\nList is empty\n\n";
      break;

    case 5:

      break;

    default:
      break;
    }
  }

  void printList();
}

/*
ItemType
public:
  ItemType();
  RelationType ComparedTo(ItemType) const;
  void Print(std::ostream&) const;
  void Initialize(int number);
private:
  int value;
*/

/*
unsorted
public:
UnsortedType();
  // Constructor
~UnsortedType();
  // Destructor
void MakeEmpty();
  // Function: Returns the list to the empty state.
  // Post:  List is empty.
bool IsFull() const;
  // Function:  Determines whether list is full.
  // Pre:  List has been initialized.
  // Post: Function value = (list is full)

int GetLength() const;
  // Function: Determines the number of elements in list.
  // Pre:  List has been initialized.
  // Post: Function value = number of elements in list

ItemType GetItem(ItemType& item, bool& found);
  // Function: Retrieves list element whose key matches item's key (if
  //           present).
  // Pre:  List has been initialized.
  //       Key member of item is initialized.
  // Post: If there is an element someItem whose key matches
  //       item's key, then found = true and someItem is returned;	
  // 	 otherwise found = false and item is returned.
  //       List is unchanged.

void PutItem(ItemType item);
  // Function: Adds item to list.
  // Pre:  List has been initialized.
  //       List is not full.
  //       item is not in list.
  // Post: item is in list.

void DeleteItem(ItemType item);
  // Function: Deletes the element whose key matches item's key.
  // Pre:  List has been initialized.
  //       Key member of item is initialized.
  //       One and only one element in list has a key matching item's key.
  // Post: No element in list has a key matching item's key.

void ResetList();
  // Function: Initializes current position for an iteration through the list.
  // Pre:  List has been initialized.
  // Post: Current position is prior to list.

ItemType GetNextItem();
  // Function: Gets the next element in list.
  // Pre:  List has been initialized and has not been changed since last call.
  //       Current position is defined.
  //       Element at current position is not last in list.
  //	     
  // Post: Current position is updated to next position.
  //       item is a copy of element at current position.

private:
NodeType* listData;
int length;
NodeType* currentPos;
*/

void printList()
{
  //item = list.GetNextItem()
  //item.Print();
}