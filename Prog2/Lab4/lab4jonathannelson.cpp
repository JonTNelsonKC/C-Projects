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

void printList(UnsortedType);

int main()
{
  UnsortedType list1; //creates an instance of the unsorted class called list1

  list1.MakeEmpty();

  ItemType userInputItem;
  int userInputInt = 0;

  cout << "\n\nWelcome to the list manipulation program.\n\nThis program is designed to allow the user to manipulate data in a simple list, enjoy.\n\n";

  for (int i = 1; i <= 10; i++)
  {
    cout << "\n\nEnter a value to store in a list\n\n";
    cin >> userInputInt;
    userInputItem.Initialize(userInputInt);
    list1.PutItem(userInputItem);
  }

  if (list1.IsFull() == true)
  {
    cout << "\n\n\tThe list is full!! How did you do that?\n\n";
  }
  if (list1.IsFull() == false)
  {
    cout << "\n\n\tThe list is not full! Great job!\n\n";
  }

  cout << "\n\nYou entered " << list1.GetLength() << " items and they were stored in the list\n\n";

  cout << "\n\nThe list you entered is the following: \n\n";

  printList(list1);

  char secondListYN;
  int loopBreaker = 0;
  while (loopBreaker == 0)
  {
    cout << "\n\n\tWould you like to create a second list? (y/n)\n\n";

    cin >> secondListYN;
    if (secondListYN == 'y')
    {
      loopBreaker = 1;

      cout << "\n\nThis list will only accept values that were also in the previous list\n\n";

      UnsortedType list2;

      list2.MakeEmpty();
      for (int i = 1; i <= 10; i++)
      {
        cout << "\n\nEnter a value to store in the second list\n\n";
        int userInputInt = 0;
        bool found;
        cin >> userInputInt;
        userInputItem.Initialize(userInputInt);
        list2.PutItem(userInputItem);
      }
      if (list2.IsFull() == true)
      {
        cout << "\n\n\tThe list is full!! How did you do that?\n\n";
      }
      if (list2.IsFull() == false)
      {
        cout << "\n\n\tThe list is not full! Great job!\n\n";
      }

      cout << "\n\nYou entered " << list2.GetLength() << " items and they were stored in the list\n\n";

      cout << "\n\nThe list you entered is the following: \n\n";

      printList(list2);

      cout << "\n\n\n\nEnter a value to check if it is in the second list:\n\n";
      cin >> userInputInt;
      bool found;

      list2.GetItem(userInputItem, found);
      if (found == true)
      {
        cout << "\n\nThe element is in the list\n\n";
      }
      else
      {
        cout << "\n\nThe element is not in the list\n\n";
      }

      cout << "\n\nChoose an element from your list to delete\n\n";
      cin >> userInputInt;
      userInputItem.Initialize(userInputInt);
      list2.DeleteItem(userInputItem);

      cout << "\n\nYour second list after deleting your requested element: \n\n";

      printList(list2);

      list2.ResetList();
      list2.~UnsortedType();
    }
    if (secondListYN == 'n')
    {
      loopBreaker = 1;
      cout << "\n\nThanks for using the list manipulation program, goodbye.\n\n";
    }
  }

  cout << "\n\nChoose an element from your list to delete\n\n";
  cin >> userInputInt;
  ItemType itemToDelete;
  itemToDelete.Initialize(userInputInt);
  list1.DeleteItem(itemToDelete);

  cout << "\n\nYour list after deleting your requested element: \n\n";

  printList(list1);

  list1.ResetList();
  list1.~UnsortedType();
}

void printList(UnsortedType list)
{
  ItemType item;
  int length;

  list.ResetList();
  length = list.GetLength();
  for (int counter = 1; counter <= length; counter++)
  {
    item = list.GetNextItem();
    item.Print(cout);
    cout << "\t";
  }
}
