//
// Created by Ander Amorin sanchez on 1/22/23.
//
#include <iostream>
#include <list>
#include "../includes/iterator_traits.hpp"
#include "../includes/vector.hpp"
#include <vector>

template<class BidirIt>
void my_reverse(BidirIt first, BidirIt last)
{
	typename ft::iterator_traits<BidirIt>::difference_type n = std::distance(first, last);
	for (--n; n > 0; n -= 2) {
		typename ft::iterator_traits<BidirIt>::value_type tmp = *first;
		*first++ = *--last;
		*last = tmp;
	}
}

void print_vector_info(const ft::vector<int>& v)
{
	std::cout << "v.size() = " << v.size() << std::endl;
	std::cout << "v.capacity() = " << v.capacity() << std::endl;

}

void std_print_vector_info(const std::vector<int>& v)
{
	std::cout << "v.size() = " << v.size() << std::endl;
	std::cout << "v.capacity() = " << v.capacity() << std::endl;

}

void vector_resize() {
	std::cout << "3 VECTOR PUSH_BACK WITH PREVIOUS RESERVE" << std::endl;
	ft::vector<int> v;
	v.reserve(5);
	print_vector_info(v);
	v.push_back(1);
	print_vector_info(v);
	v.push_back(2);
	print_vector_info(v);
	v.push_back(3);
	print_vector_info(v);
	v.push_back(4);
	print_vector_info(v);
	v.push_back(5);
	print_vector_info(v);
	std::cout << "3.1 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "3.1 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.resize(3);
	print_vector_info(v);
	std::cout << "3.2 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "3.2 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.resize(1);
	print_vector_info(v);
	std::cout << "3.2 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "3.2 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}

/*
void std_vector_resize() {
	std::cout << "3 STD VECTOR PUSH_BACK WITH PREVIOUS RESERVE" << std::endl;
	std::vector<int> v;
	v.reserve(5);
	std_print_vector_info(v);
	v.push_back(1);
	std_print_vector_info(v);
	v.push_back(2);
	std_print_vector_info(v);
	v.push_back(3);
	std_print_vector_info(v);
	v.push_back(4);
	std_print_vector_info(v);
	v.push_back(5);
	std_print_vector_info(v);
	std::cout << "3.1 STD PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "3.1 STD PRINT VECTOR WITH ITERATORS" << std::endl;
	for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.resize(3);
	std_print_vector_info(v);
	std::cout << "3.2 STD PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "3.2 STD PRINT VECTOR WITH ITERATORS" << std::endl;
	for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.resize(1);
	std_print_vector_info(v);
	std::cout << "3.3 STD PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "3.3 STD PRINT VECTOR WITH ITERATORS" << std::endl;
	for (std::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}
 */

void vector_pop_back() {
	std::cout << "2 VECTOR POP BACK" << std::endl;
	ft::vector<int> v;
	v.push_back(1);
	print_vector_info(v);
	v.push_back(2);
	print_vector_info(v);
	v.push_back(3);
	print_vector_info(v);
	v.pop_back();
	print_vector_info(v);
	std::cout << "2.1 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "2.1 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.pop_back();
	print_vector_info(v);
	std::cout << "2.2 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "2.2 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.pop_back();
	print_vector_info(v);
	std::cout << "2.3 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "2.3 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}

void vector_push_back_without_previous_reserve() {
	std::cout << "1 VECTOR PUSH_BACK WITHOUT PREVIOUS RESERVE" << std::endl;
	ft::vector<int> v;
	v.push_back(1);
	print_vector_info(v);
	v.push_back(2);
	print_vector_info(v);
	v.push_back(3);
	print_vector_info(v);
	v.push_back(4);
	print_vector_info(v);
	v.push_back(5);
	print_vector_info(v);
	std::cout << "1.1 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "1.1 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}

void vector_push_back_with_previous_reserve() {
	std::cout << "0 VECTOR PUSH_BACK WITH PREVIOUS RESERVE" << std::endl;
	ft::vector<int> v;
	v.reserve(5);
	print_vector_info(v);
	v.push_back(1);
	print_vector_info(v);
	v.push_back(2);
	print_vector_info(v);
	v.push_back(3);
	print_vector_info(v);
	v.push_back(4);
	print_vector_info(v);
	v.push_back(5);
	print_vector_info(v);
	std::cout << "0.1 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "0.1 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}


int main()
{
	vector_push_back_with_previous_reserve();
	std::cout << std::endl;
	std::cout << std::endl;
	vector_push_back_without_previous_reserve();
	std::cout << std::endl;
	std::cout << std::endl;
	vector_pop_back();
	std::cout << std::endl;
	std::cout << std::endl;
	vector_resize();
	std::cout << std::endl;
	std::cout << std::endl;
	std_vector_resize();
	std::cout << std::endl;
	std::cout << std::endl;


	return 0;
}