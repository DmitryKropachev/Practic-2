#include <iostream>
#include <string>

using namespace std;

class TBook {
private:
    string Name;
    string Author;
    int Count;

public:
    TBook() {
        Name = "";
        Author = "";
        Count = 0;
    }

    TBook(string newname, string newauthor, int newcount) {
        Name = newname;
        Author = newauthor;
        Count = newcount;
    }

    void SetName(string newname) {
        Name = newname;
    }

    void SetAuthor(string newauthor) {
        Author = newauthor;
    }

    void SetCount(int newcount) {
        Count = newcount;
    }

    string GetName() const {
        return Name;
    }

    string GetAuthor() const {
        return Author;
    }

    int GetCount() const {
        return Count;
    }
};

int main()
{
    TBook book1;
    book1.SetName("Mechanics");
    book1.SetAuthor("Artyom Orekhov");
    book1.SetCount(16);

    TBook book2("More than just programming", "Kirill Aleksandrovich Kasatkin", 12000);

    cout << "First Book: " << book1.GetName() << ", " << book1.GetAuthor() << ", " << book1.GetCount() << endl;
    cout << "Second Book: " << book2.GetName() << ", " << book2.GetAuthor() << ", " << book2.GetCount() << endl;

    return 0;
}
