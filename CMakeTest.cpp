//
// Created by polov on 10.11.2021.
//

#include <gtest/gtest.h>
#include "hashtable.h"


class HashTableTest : public testing::Test{
protected:
    HashTable t0,
              t1,
              t2;
    void SetUp() override{
        t1.insert("James", { 21, 70 });
        t1.insert("Lara", { 21, 55 });
        t1.insert("Lily", { 20, 73 });
        t1.insert("Jhon", { 19, 67 });
        t1.insert("Timothy", { 22, 80 });
        t1.insert("Tom", { 18, 65 });
        t1.insert("Anne", { 20, 60 });
        t1.insert("Barry", { 21, 65 });

        t2.insert("Paul", { 19, 68 });
        t2.insert("Edgar", { 23, 91 });
        t2.insert("Emily", { 20, 74 });
        t2.insert("William", { 21, 84 });
        t2.insert("Ringo", { 22, 68 });
        t2.insert("Staphany", { 20, 50 });
        t2.insert("Anastasia", { 19, 68 });
        t2.insert("Harry", { 21, 64 });
    }

};