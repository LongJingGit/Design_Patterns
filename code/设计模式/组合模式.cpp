﻿#include "组合模式.h"

// 访问c0 = {leaf1, {leaf2, leaf3}}中的元素
void CompositePatternTest::main()
{
    Component* c0 = new Composite();
    Component* c1 = new Composite();
    Component* leaf1 = new Leaf("1");
    Component* leaf2 = new Leaf("2");
    Component* leaf3 = new Leaf("3");
    c0->add(leaf1);
    c0->add(c1);
    c1->add(leaf2);
    c1->add(leaf3);
    c0->operation();
}