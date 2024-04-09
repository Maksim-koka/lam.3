cmake_minimum_required(VERSION 3.25)
project(data_structures)

set(CMAKE_CXX_STANDARD 17)

add_executable(data_structures main.cpp
        linked_list/SinglyLinkedList.cpp
        linked_list/SinglyLinkedList.h
        node/SingleNode.h node/DoubleNode.h
        linked_list/DoubleLinkedList.cpp
        linked_list/DoubleLinkedList.h
        node/GenericNode.h
        linked_list/CircularList.h examples/ClassWithFile.cpp examples/ClassWithFile.h)
