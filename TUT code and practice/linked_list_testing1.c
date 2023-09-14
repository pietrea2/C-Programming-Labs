#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    char *artist ;
    char *songName ;
    char *genre ;
    struct node *nextNode ;
} Node;



Node *NewNode(char *Artist, char *Song, char *Genre, Node *nextNode);

void printList(Node *head);

Node *insertIntoOrderedList(Node *head, char *ARTIST, char *SONG, char *GENRE);



int main(int argc, char **argv)
{
	Node *head = NULL;
    char *artist_1 = "Linkin Park";
    char *song_1 = "Papercut";
    char *genre_1 = "Metal/Hip-Hop";
    head = insertIntoOrderedList(head, artist_1, song_1, genre_1);
    printList(head);

    head = insertIntoOrderedList(head, "Pinkpantheress", "Take me home", "Pop");
    printList(head);

	return 0;
}

// Creating a new node
Node *NewNode(char *Artist, char *Song, char *Genre, Node *nextNode) {
  Node *t = (Node *) malloc(sizeof(Node));

  if (t != NULL) {
    t -> artist = Artist;
    t -> songName = Song;
    t -> genre = Genre;
    t -> nextNode = nextNode;
  }

  return t;
}

// Printing all the nodes in a linked list
void printList(Node *head) {
    Node *current = head;

    printf("\n\nPrinting Linked List:\n");
    while (current != NULL) {
        printf("%s %s %s\n", current -> artist, current -> songName, current -> genre);
        current = current -> nextNode;
    }
}

Node *insertIntoOrderedList(Node *head, char *ARTIST, char *SONG, char *GENRE) {
    //char SONG, ARTIST, GENRE;
    
    if (head == NULL || (int)(ARTIST[0]) < (int)(head -> artist[0]) )
        return NewNode(ARTIST, SONG, GENRE, head); // a new head of the list

    Node *current = head;
    
    while (current -> nextNode != NULL && (int)(ARTIST[0]) > (int)(current -> nextNode -> artist[0]) ) 
        current = current -> nextNode;

    current -> nextNode = NewNode(ARTIST, SONG, GENRE, current -> nextNode);
    return head;
}