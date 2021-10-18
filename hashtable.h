//
// Created by pavel on 18.10.2021.
//

#ifndef UNTITLED2_HASHTABLE_H
#define UNTITLED2_HASHTABLE_H

struct Student {
    unsigned age;
    unsigned weight;
};

typedef std::string Key;
typedef Student Value;

class HashTable
{
public:
    HashTable();
    ~HashTable();
    HashTable(const HashTable& b);
    HashTable(HashTable&& b);
    HashTable& operator=(const HashTable& b);
    HashTable& operator=(HashTable&& b);
// Обменивает значения двух хэш-таблиц.
    void swap(HashTable& b);
// Очищает контейнер.
    void clear();
// Удаляет элемент по заданному ключу.
    bool erase(const Key& k);
// Вставка в контейнер. Возвращаемое значение - успешность вставки.
    bool insert(const Key& k, const Value& v);
// Проверка наличия значения по заданному ключу.
    bool contains(const Key& k) const;
// Возвращает значение по ключу. Небезопасный метод.
// В случае отсутствия ключа в контейнере, следует вставить в контейнер
// значение, созданное конструктором по умолчанию и вернуть ссылку на него.
    Value& operator[](const Key& k);
// Возвращает значение по ключу. Бросает исключение при неудаче.
    Value& at(const Key& k);
    const Value& at(const Key& k) const;
    size_t size() const;
    bool empty() const;
    friend bool operator==(const HashTable& a, const HashTable& b);

    friend bool operator!=(const HashTable& a, const HashTable& b);
};
bool operator==(const HashTable& a, const HashTable& b);
bool operator!=(const HashTable& a, const HashTable& b);

#endif //UNTITLED2_HASHTABLE_H
