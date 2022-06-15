//
//  RadixTree.hpp
//  Project 4
//
//  Created by Andrew Wang on 3/3/22.
//

#ifndef RadixTree_hpp
#define RadixTree_hpp
#include <stdio.h>
#include <stdio.h>


#include <string>
#include <vector>
#include <iostream>
#include <stdio.h>
#include <stdio.h>
using namespace std;
template <typename ValueType>
class RadixTree {
public:
    RadixTree(){
        root = new Node();
    }
    ~RadixTree(){
        deleteNode(root);
    }
    void insert(std::string key, const ValueType& value);
    ValueType* search(std::string key) const{
        Node* traverseNode = root;
        int elementsFound = 0;
        ValueType* foundElement;
        while (traverseNode!= nullptr && !isLeaf(traverseNode)&&elementsFound<key.length()){
            
        }
    }
private:
    struct Node{
        char key;
        std::vector<Node*> m_children;
        std::vector<ValueType> values;
    };
    Node* root;
    void deleteNode(Node* node);
    bool isLeaf(Node* node);
};
template<typename ValueType>
void RadixTree<ValueType>::deleteNode(Node* node){
    if (node!=nullptr){
        for (int i = 0; i < node->m_children.size(); i++) {
            deleteNode(node->m_children[i]);
        }
        delete node;
    }
    return;
}
template<typename ValueType>
bool RadixTree<ValueType>::isLeaf(Node* node){
    if (node->m_children.size()==0){
        return true;
    }
    return false;
}
template<typename ValueType>
void RadixTree<ValueType>::insert(std::string key, const ValueType& value){
    bool hasKey = false;
    for (int i=0;i<key.size();i++){
        
    }
}


#endif /* RadixTree_h */
