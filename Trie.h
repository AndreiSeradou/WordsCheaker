#pragma once
#include <string>
#include <iostream>

//class Trie
//{
//    class node {
//    public:
//        node* next[26];     
//                            
//                            
//        int strings;        
//
//        node() {
//            for (int i = 0; i < 26; i++) {  
//                next[i] = nullptr;                      
//            }
//            strings = 0;
//        }
//    };
//    std::string cur_str = "";
//    node* root = new node();
//public:
//
//    void add(const std::string& s) {
//        node* cur_v = root;    
//
//        for (int i = 0; i < s.length(); i++) {
//            char c = s[i];
//
//            if (cur_v->next[c - 'a'] == nullptr) {
//                cur_v->next[c - 'a'] = new node();
//            }
//
//            cur_v = cur_v->next[c - 'a'];
//        }
//
//        cur_v->strings++;
//    }
//
//    bool has(const std::string& s) {
//        node* cur_v = root;
//
//        for (int i = 0; i < s.length(); i++) {
//            cur_v = cur_v->next[s[i] - 'a'];
//            if (cur_v == nullptr) {
//                return false;
//            }
//        }
//
//        return cur_v->strings > 0;
//    }
//
//    std::string cur_str = "";
//
//    void write(node* v = root) {
//        for (int i = 0; i < v->strings; i++) {
//            std::cout << cur_str << std::endl;
//        }
//
//        for (int i = 0; i < 26; i++) {
//            if (v->next[i] != nullptr) {
//                cur_str.push_back('a' + i);
//                write(v->next[i]);
//                cur_str.pop_back();
//            }
//        }
//    }
//};
//
