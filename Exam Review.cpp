#include <iostream>

// 1. (30 pts; 5 ea) Give the output of the following code snippets, if any. If the code does not produce
// output, write no output. If the code produces a runtime error, write error. None of this code produces
// compile-time errors. All parts of this problem are independent.

//(a)
cout << "It’s LeviOsa, not LeviosAR!" << endl;

// It's LeviOsa, not LeviosAR!

//(b)
string name = "Fluffy";
cout << "Who told you about " << name.c_str() << "?" << endl;

// Who told you about Fluffy?

//(c)
const char *s = "Yes, Hermione, I think this is gonna be "
                "exactly like wizard’s chess.";
cout << string(s) << endl;

// Yes, Hermione, I think this is gonna be exactly like wizard's chess.
// Calls string constructor

//(d)
vector<string> v;
v[0] = "You’ve got dirt on your nose, ";
v[1] = "by the way. ";
v[2] = "Did you know? ";
v[3] = "Just there.";
for (vector<string>::iterator i = v.begin(); i != v.end(); i++)
{
    cout << *i << endl;
}

// As written, v[0] does not exist.
// Error.  Index out of bounds

//(e)
vector<string> v;
v.push_back(string("I do, but your "));
v.push_back(string("cousin don’t, do he?"));
for (vector<string>::iterator i = v.begin(); i != v.end(); i++)
{
    cout << *i << endl;
}

// I do, but your
// cousin don't do he?

//(f)
try
{
    throw "They’re the worst sort of Muggles imaginable. "
          "They really are...";
}
catch (string s)
{
    cout << s << endl;
}

// Error - uncaught exception (Not a string its a const char *)
// or
// No output - Programmer didn't intend for exception to be caught here

// 2. (40 pts; 20 ea) Implement the methods specified given the following class. Assume that all methods
// are implemented—except for those which you are asked to implement—and work as expected (ask, if
// you’re uncertain). You must implement the specified functionality fully within the assigned method;
// you may not alter the class declaration. An empty list is initialized with a null head and tail;
// otherwise, head addresses the first node in the list, and tail addresses the last.
template <class T>
class exam_list
{
    class exam_list_node
    {
    public:
        T data;
        exam_list_node *next;
        exam_list_node *previous;
        inline exam_list_node(T d,
                              exam_list_node *n,
                              exam_list_node *p) : data(d), next(n), previous(p)
        {
            if (next)
            {
                next->previous = this;
            }
            if (previous)
            {
                previous->next = this;
            }
        }
    };

private:
    exam_list_node *head;
    exam_list_node *tail;

public:
    exam_list() : head(0), tail(0) {}
    ˜exam_list();
    void insert_head(T d);
    void insert_tail(T d);
    // The code on the following pages is implemented here,
    // inside the class definition.
};

//(a) Implement the copy constructor for exam list. Your implementation should produce a deep
// copy.
// You may assume that your code appears within the body of the class definition.

exam_list(const exam_list &l) : head(0), tail(0)
{
    exam_list_node *t;
    for (t = l.head; t; t = t->next)
    {
        insert_tail(t->data);
    }
}

//(b) Implement the method insert unique() which inserts d at the tail if and only if d is not
// already in the list according to the comparitor compare(); that is, insert if for no element in
// the list does compare() return 0.
// You may assume that your code appears within the body of the class definition.
void insert_unique(T d, int (*compare)(const T &, const T &))
{
    exam_list_node *t;
    for (t = head; t && compare(d, t->data); t = t->next)
    {
    }
    if (!t)
    {
        insert_tail(d);
    }
}

/*
3. (30 pts; 2 ea) Circle TRUE or FALSE in response to each of these statements about C++. Assume that
the necessary headers are included for any function or class used. Read every word carefully; some
of these are subtle.

(a) The following line is a valid statement in C++:
int *i = malloc(12 * sizeof (*i));
FALSE
NEED TO CAST MALLOC TO AN INT

(b) The C compiler handles extern "C" declarations.
FALSE
TELLS C++ TO TURN OFF NAME MANGLING

(c) C++ does not allow name mangling.
FALSE

(d) Destructors for derived classes are called in the same order as the constructors.
FALSE
REVERSED ORDER

(e) Overloaded functions share both names and formal parameters.
FALSE

(f) Overloaded functions may differ only in return type.
FALSE

(g) Function overloading requires name mangling
TRUE

(h) Exceptions may be of any type.
TRUE

(i) You can compile any C program with a C++ compiler.
FALSE

(j) You must always use new and delete when working with dynamic memory.
FALSE
CAN ALSO USE MALLOC AND FREE

(k) Polymorphism is a dynamic concept.
TRUE

(l) C and C++ use different calling conventions by default, but it’s still possible to link them together.
TRUE

(m) C++ has first-class static dispatch.
TRUE

(n) C++ has first-class dynamic dispatch.
TRUE
RUNTIME CAN DECIDE WHICH FUNCTION TO CALL BASED ON DYNAMIC TYPE OF ILLICIT PARAMETER

(o) C++ has first-class double dispatch.
FALSE


*/
