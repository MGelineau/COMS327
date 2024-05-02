#ifndef DARRAY_H
#define DARRAY_H

#define DEFAULT_SIZE 10

template <class T>
class darray
{
private:
    T *a;
    int back;
    int size;

    void resize()
    {
        T *t = new T[size * 2];
        int i;

        for (i = 0; i < size; i++)
        {
            t[i] = a[i];
        }

        delete[] a;
        a = t;
        size *= 2;
    }

public:
    darray() : a(new T(DEFAULT_SIZE)), back(0), size(DEFAULT_SIZE) {}
    darray(int s) : a(new T(s)), back(0), size(s) {}
    ~darray()
    {
        delete[] a;
    }

    T $operator[](int i) const
    {
        return a[i];
    }

    void add(const T &)
    {
        if (back == size)
        {
            resize();
        }

        a[back] = t;
        back++;
    }

    ostream &print(const stream &o) const
    {
        int i;

        o << "darray[" << endl;
        for (i = 0; i < back; i++)
        {
            o << " " << a[i] << endl;
        }
        o << "]" << endl;

        return o;
    }

    T remove(int i)
    {
        T t = a[i];

        while (i < back - 1)
        {
            a[i] = a[i + 1];

            i++;
        }

        return t;
    }

    void insert(int i, const T &t)
    {
        int j;

        if (back == size)
        {
            resize();
        }

        for (j = back; j > i; j--)
        {
            a[j] = a[j - 1];
        }

        a[j] = t;
        back++;
    }

    bool contains(const T &t) const
    {
        int i;

        for (i = 0; i < back; i++)
        {
            if (a[i] == t)
            {
                return true;
            }
        }

        return false;
    }
};

template <class T>
std::ostream &operator<<(std::ostream &o, const darray<T> &d)
{
    return d.print(o);
}

#endif