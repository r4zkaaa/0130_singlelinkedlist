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