#include <iostream>
using namespace std;

struct node {
	int data;
	node *next;
	node(int value)	{
		data = value;
		next = NULL;}
	node ()
	{ data = 0;
		next = NULL;	}
};


node *start = NULL;

void deleteNode(int data)
{
	//Add your code here	
}
void deleteNodeAtlast()
{
	//Add your code here	
}

void addNode(int data)
{
	node *temp = new node(data);
	
	if ( start == NULL)
	{
		start = temp;
	}
	else
	{
		node *curr = start;
		
		for (;curr->next != NULL; curr = curr->next)
		{
		//	cout<< curr->data <<endl;
		}
		curr->next = temp;
	}
}


void display ()
{
		node *curr = start;
		
		for (;curr->next != NULL; curr = curr->next)
		{
			cout<< "\t\t\t\t\t"<<curr->data << endl;
		}
		cout<< "\t\t\t\t\t"<<curr->data << endl;
		
}

int main() {
	// your code goes here
	

	for (int i = 1; i <= 10; ++i)
	{
		addNode(i);
	}
	
	display();
	
	return 0;
}
