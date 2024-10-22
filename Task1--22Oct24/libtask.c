//Task1-Q3, Yasin M Hussain
//24-08-2024

#include <stdio.h>
#include<conio.h>
#include <string.h>


struct book 
{
    char title[50];
    char author[50];
    int pubyr;
};

struct lib 
{
    struct book b[100]; 
    int bcount;           
};

void addBook(struct lib *l, const char *title, const char *author, int year) 
{
    if (l->bcount < 100) 
	{
        strcpy(l->b[l->bcount].title, title);
        strcpy(l->b[l->bcount].author, author);
        l->b[l->bcount].pubyr = year;
        l->bcount++;
    } 
	else 
	{
        printf("\nLibrary is full, cannot add more books.");
    }
}

void displayBooks(const struct lib *l) 
{
	int i; 
    if (l->bcount == 0) 
	{
        printf("\nThe library has no books.");
    } 
	else 
	{
        for (i = 0; i < l->bcount; ++i) 
		{
            printf("\nBook %d:", i + 1);
            printf("\nTitle: %s", l->b[i].title);
            printf("\nAuthor: %s", l->b[i].author);
            printf("\nPublication Year: %d", l->b[i].pubyr);
            printf("\n-------------------------\n");
        }
    }
}

int main() 
{
    struct lib l;
    l.bcount = 0;
    
    addBook(&l, "The God of Small Things", "Arundhati Roy", 1997);
    addBook(&l, "Brahmaputra and Beyond: Linking Assam to the World", "Jahnavi Baruah", 2015);
    addBook(&l, "Smell", "Radhika Jha", 2001); 
    
    displayBooks(&l);

    return 0;
}

