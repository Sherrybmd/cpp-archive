class row_iterator
{
    int (&arr)[3][3];
    std::size_t pos;
public:
    row_iterator(int (&arr)[3][3], std::size_t pos) : arr(arr), pos(pos) {}

    row_iterator& operator++() { ++pos; return *this; }
    row_iterator operator++(int) { auto that = *this; ++pos; return that; }
    int & operator*() { return arr[pos / 3][pos % 3]; }
    int * operator->() { return &arr[pos / 3][pos % 3]; }

    friend bool operator==(row_iterator lhs, row_iterator rhs) { return (lhs.arr == rhs.arr) && (lhs.pos == rhs.pos); }
    friend bool operator!=(row_iterator lhs, row_iterator rhs) { return !lhs == rhs; }
};

row_iterator row_begin(int (&arr)[3][3]) { return row_iterator(arr, 0); }
row_iterator row_end(int (&arr)[3][3]) { return row_iterator(arr, 9); }

class col_iterator
{
    int (&arr)[3][3];
    std::size_t pos;
public:
    col_iterator(int (&arr)[3][3], std::size_t pos) : arr(arr), pos(pos) {}

    col_iterator& operator++() { ++pos; return *this; }
    col_iteratoroperator++(int) { auto that = *this; ++pos; return that; }
    int & operator*() { return arr[pos % 3][pos / 3]; }
    int * operator->() { return &arr[pos % 3][pos / 3]; }

    friend bool operator==(col_iterator lhs, col_iterator rhs) { return (lhs.arr == rhs.arr) && (lhs.pos == rhs.pos); }
    friend bool operator!=(col_iterator lhs, col_iterator rhs) { return !lhs == rhs; }
};

col_iterator col_begin(int (&arr)[3][3]) { return col_iterator(arr, 0); }
col_iterator col_end(int (&arr)[3][3]) { return col_iterator(arr, 9); }
