class MyHashMap
{
public:
    int arr[10000001] = {-1};

    MyHashMap()
    {
        // arr[10000001] = {-1};
    }

    void put(int key, int value)
    {
        arr[key] = value + 1;
    }

    int get(int key)
    {
        if (arr[key] == -1)
        {
            return -1;
        }
        return arr[key] - 1;
    }

    void remove(int key)
    {
        arr[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */