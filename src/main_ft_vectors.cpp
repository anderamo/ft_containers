//
// Created by Ander Amorin sanchez on 1/22/23.
//
#include <iostream>
#include <list>
#include "../includes/iterator_traits.hpp"
#include "../includes/vector.hpp"

void print_vector_info(const ft::vector<int>& v)
{
	std::cout << "v.size() = " << v.size() << std::endl;
	std::cout << "v.capacity() = " << v.capacity() << std::endl;

}

void ft_vector_swap() {
	std::cout << "7 FT VECTOR SWAP" << std::endl;
	ft::vector<int> v, y;
	v.reserve(5);
	print_vector_info(v);
	v.push_back(1);
	print_vector_info(v);
	v.push_back(2);
	print_vector_info(v);
	v.push_back(3);
	print_vector_info(v);
	std::cout << "7.1 FT PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "7.1 FT PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.swap(y);
	print_vector_info(y);
	std::cout << "7.2 FT PRINT VECTOR WITH y[i]" << std::endl;
	for (int i = 0; i < y.size(); i++) {
		std::cout << "y[" << i << "] = " << y[i] << std::endl;
	}
	std::cout << "7.2 FT PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = y.begin() ; it != y.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}

void ft_vector_copy_assignment() {
	std::cout << "6 FT VECTOR COPY ASSIGNMENT" << std::endl;
	ft::vector<int> v, y;
	v.reserve(5);
	print_vector_info(v);
	v.push_back(1);
	print_vector_info(v);
	v.push_back(2);
	print_vector_info(v);
	v.push_back(3);
	print_vector_info(v);
	std::cout << "6.1 FT PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "6.1 FT PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	y = v;
	print_vector_info(y);
	std::cout << "6.2 FT PRINT VECTOR WITH y[i]" << std::endl;
	for (int i = 0; i < y.size(); i++) {
		std::cout << "y[" << i << "] = " << y[i] << std::endl;
	}
	std::cout << "6.2 FT PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = y.begin() ; it != y.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}

void ft_vector_clear() {
	std::cout << "5 FT VECTOR CLEAR" << std::endl;
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
	std::cout << "5.1 FT PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "5.1 FT PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.clear();
	print_vector_info(v);
	std::cout << "5.2 FT PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "5.2 FT PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.push_back(4);
	print_vector_info(v);
	v.push_back(5);
	print_vector_info(v);
	std::cout << "5.3 FT PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "5.3 FT PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}

void ft_vector_resize_and_fill() {
	std::cout << "4 VECTOR RESIZE AND FILL" << std::endl;
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
	std::cout << "4.1 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "4.1 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.resize(3, 42);
	print_vector_info(v);
	std::cout << "4.2 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "4.2 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
	v.resize(7, 42);
	print_vector_info(v);
	std::cout << "4.2 PRINT VECTOR WITH v[i]" << std::endl;
	for (int i = 0; i < v.size(); i++) {
		std::cout << "v[" << i << "] = " << v[i] << std::endl;
	}
	std::cout << "4.2 PRINT VECTOR WITH ITERATORS" << std::endl;
	for (ft::vector<int>::iterator it = v.begin() ; it != v.end(); ++it) {
		std::cout << "*it = " << *it << std::endl;
	}
}

void ft_vector_resize() {
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

void ft_vector_pop_back() {
	std::cout << "2 VECTOR POP BACK" << std::endl;
	ft::vector<int> v;
	std::cout << "PUSH BACK" << std::endl;
	v.push_back(1);
	print_vector_info(v);
	std::cout << "PUSH BACK" << std::endl;
	v.push_back(2);
	print_vector_info(v);
	std::cout << "PUSH BACK" << std::endl;
	v.push_back(3);
	print_vector_info(v);
	std::cout << "POP BACK" << std::endl;
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
	std::cout << "POP BACK" << std::endl;
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
	std::cout << "POP BACK" << std::endl;
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

void ft_vector_push_back_without_previous_reserve() {
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

void ft_vector_push_back_with_previous_reserve() {
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
//	ft_vector_push_back_with_previous_reserve();
//	std::cout << std::endl;
//	std::cout << std::endl;
//
//	ft_vector_push_back_without_previous_reserve();
//	std::cout << std::endl;
//	std::cout << std::endl;
//
//	ft_vector_pop_back();
//	std::cout << std::endl;
//	std::cout << std::endl;
//
//	ft_vector_resize();
//	std::cout << std::endl;
//	std::cout << std::endl;
//
//	ft_vector_resize_and_fill();
//	std::cout << std::endl;
//	std::cout << std::endl;
//
//	ft_vector_clear();
//	std::cout << std::endl;
//	std::cout << std::endl;

	ft_vector_copy_assignment();
	std::cout << std::endl;
	std::cout << std::endl;

	ft_vector_swap();
	std::cout << std::endl;
	std::cout << std::endl;


	return 0;
}