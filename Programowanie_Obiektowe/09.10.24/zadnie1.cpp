class IntArray {
public:
    IntArray(size_t _size) : data(new int[size]), size(_size)
    {
        for(size_t i = 0; i < _size; i++)
            data[i] = 0
    };

    ~IntArray() { delete [] data; }; //destruktor
    void set(size_t i, int val) { data[i] = val; }
    int get(size_t i) const {return data[i]; }
    size_t getSize() const {return size; }

private:
    int *data;
    size_t size;
};

int main() {
    IntArray array(3);
    IntArray copy(array);
    return 0;
}