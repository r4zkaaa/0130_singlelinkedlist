#include <iostream>
#include <string>
using namespace std;

class Node 
{
public:
    int noMhs;
    Node *next;
};

class lindkedList 
{
    Node *START;

public:
    lindkedList()
    {
        START = NULL;
    }

     void addNode()
    {
     int nim;
       cout << "\nMasukkan nomor mahasiswa: ";
    cin >> nim;

    Node *nodeBaru = new Node();
    nodeBaru->noMhs = nim;

    if (START == NULL || nim <= START->noMHS)
    {
        if (START !=NULL && nim == START->noMhs)
        {
            cout << "\nDuplikasi noMhs tidak diijinkan\n";
            return;
        }

        nodeBaru->next = START;
        START = nodeBaru;
        return;
    }
    }

    class linkedList
    {
        void addNode();
          if (START == NULL || nim <= START->noMHS
            return;
        )

        Node *previous = START;
        Node *current = START;

        while (current != NULL && nim > current->noMhs)
        {
            if (nim == current->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak diijinkan\n";
                return;
            }
            previous = current;
            current = current->next;
        }

        nodeBaru->next = current;
        previous->next = nodeBaru;
    }