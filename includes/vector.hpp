//
// Created by Ander Amorin sanchez on 3/24/22.
//

#ifndef FT_CONTAINERS_VECTOR_HPP
#define FT_CONTAINERS_VECTOR_HPP

#include "iterator_traits.hpp"
#include <type_traits>
#include <stdexcept>
#include <iosfwd>
#include <climits>
#include <limits>
#include <initializer_list>
#include <memory>
#include <stdexcept>
#include <algorithm>

namespace ft {

	template<class vector>
	class v_iterator : public ft::iterator<std::random_access_iterator_tag, typename vector::value_type> {
		typename vector::value_type* p;
	public:
		explicit v_iterator(typename vector::value_type* x) :p(x) {}
		v_iterator(const v_iterator& mit) : p(mit.p) {}
		v_iterator& operator++() {
			++p;
			return *this;
		}
		v_iterator operator++(typename vector::value_type) {
			v_iterator tmp(*this);
			operator++();
			return tmp;
		}
		v_iterator& operator--() {
			++p;
			return *this;
		}
		v_iterator operator--(typename vector::value_type) {
			v_iterator tmp(*this);
			operator--();
			return tmp;
		}
		bool operator==(const v_iterator& rhs) const {
			return p==rhs.p;
		}
		bool operator!=(const v_iterator& rhs) const {
			return p!=rhs.p;
		}
		typename vector::value_type& operator*() {
			return *p;
		}
	};

	template <class vector>
	class v_reverse_iterator {
	public:
		typename vector::value_type* p;
		typedef vector                                            iterator_type;
		typedef typename ft::iterator_traits<vector>::difference_type difference_type;
		typedef typename ft::iterator_traits<vector>::reference       reference;
		typedef typename ft::iterator_traits<vector>::pointer         pointer;

		v_reverse_iterator() {};
		explicit v_reverse_iterator(vector x) {};
		template <class U>  v_reverse_iterator(const reverse_iterator<U>& u) {};
		template <class U>  v_reverse_iterator& operator=(const reverse_iterator<U>& u) {};
		vector base() const {};
		reference operator*() const {};
		pointer   operator->() const {};
		v_reverse_iterator& operator++() {};
		v_reverse_iterator  operator++(int) {};
		v_reverse_iterator& operator--() {};
		v_reverse_iterator  operator--(int) {};
		v_reverse_iterator  operator+ (difference_type n) const {};
		v_reverse_iterator& operator+=(difference_type n) {};
		v_reverse_iterator  operator- (difference_type n) const {};
		v_reverse_iterator& operator-=(difference_type n) {};
		reference         operator[](difference_type n) const {};
		bool operator==(const v_reverse_iterator& rhs) const {
			return p==rhs.p;
		}
		bool operator!=(const v_reverse_iterator& rhs) const {
			return p!=rhs.p;
		}
	};

    template<class T, class Allocator = std::allocator <T> >
    class vector {
    public:
        typedef T value_type;
        typedef Allocator allocator_type;
        typedef typename allocator_type::reference reference;
        typedef typename allocator_type::const_reference const_reference;
        typedef typename allocator_type::size_type size_type;
        typedef typename allocator_type::difference_type difference_type;
        typedef typename allocator_type::pointer pointer;
        typedef typename allocator_type::const_pointer const_pointer;
		typedef typename ft::v_iterator<vector>          iterator;
		typedef typename ft::v_reverse_iterator<vector>          reverse_iterator;
		typedef const_pointer                            const_iterator;
        //typedef reverse_iterator;
        //typedef const_reverse_iterator;


        vector() : _size_vector_array(0) , _capacity_vector_array(0), _max_size_vertor_array(std::numeric_limits<difference_type>::max()){
			_vector_array = _alloc.allocate(0);
		};


		explicit vector(const allocator_type &){std::cout << "Vector constructor 2\n";};

		explicit vector(size_type n){std::cout << "Vector constructor 3\n";};

		vector(size_type n, const value_type &value, const allocator_type & = allocator_type()){std::cout << "Vector constructor 4\n";};

		template<class InputIterator>
		vector(InputIterator first, InputIterator last, const allocator_type & = allocator_type()){std::cout << "Vector constructor 5\n";};

		vector(const vector &x){std::cout << "Vector constructor 6\n";};

        //vector(initializer_list <value_type> il){};

        //vector(initializer_list <value_type> il, const allocator_type &a){};

        ~vector(){
			if (_size_vector_array != 0)
				_alloc.deallocate(_vector_array, _size_vector_array);
		};

        vector &operator=(vector<int> *x){
			reserve(x->_size_vector_array);
			this->_size_vector_array = x->_size_vector_array;
			for (size_t i = 0; i < x->_size_vector_array; i++) {
				this->_vector_array[i] = x->_vector_array[i];
			}
			this->_alloc = x->_alloc;
			this->_max_size_vertor_array = x->_max_size_vertor_array;
			return *this;
		};

        //vector &operator=(initializer_list <value_type> il);

        template<class InputIterator>
        void assign(InputIterator first, InputIterator last){};

        void assign(size_type n, const value_type &u){};

        //void assign(initializer_list <value_type> il){};

        allocator_type get_allocator() const{};
		iterator begin(){return iterator(this->_vector_array);};
        //const_iterator begin() const {};
		iterator end() {return iterator(this->_vector_array + this->_size_vector_array);};
        //const_iterator end() const {};
        reverse_iterator rbegin() {};
        //const_reverse_iterator rbegin() const {};
        reverse_iterator rend() {};
        //const_reverse_iterator rend() const {};
        //const_iterator cbegin() const {};
        //const_iterator cend() const {};
        //const_reverse_iterator crbegin() const {};
        //const_reverse_iterator crend() const {};
		size_type size() const {
			return this->_size_vector_array;
		};
		size_type max_size() const{
			return this->_max_size_vertor_array;
		};
		size_type capacity() const {
			return this->_capacity_vector_array;
		};
		bool empty() const {
			return this->__begin_ == this->__end_;
		};
        void reserve(size_type n){
			if (n > max_size()) {
				std::length_error("Reserve bigger than max size possible");
			}
			if (n > capacity()) {
				_realloc(n);
			}
		};
        void shrink_to_fit() {};
		reference operator[](size_type n){
			return this->_vector_array[n];
		};
        const_reference operator[](size_type n) const{
			return this->_vector_array[n];
		};
        reference at(size_type n){};
        const_reference at(size_type n) const{};
        reference front(){
			_LIBCPP_ASSERT(!empty(), "back() called for empty vector");
			return *(this->begin());
		};
        const_reference front() const{
			_LIBCPP_ASSERT(!empty(), "back() called for empty vector");
			return *(this->begin() - 1);
		};
		reference back(){
			_LIBCPP_ASSERT(!empty(), "back() called for empty vector");
			return *(this->end() - 1);
		};
        const_reference back() const{
			_LIBCPP_ASSERT(!empty(), "back() called for empty vector");
			return *(this->end() - 1);
		};
        value_type *data() {};
        const value_type *data() const {};
		void push_back(const value_type &x){
			_reserve_vector(this->_size_vector_array);
			this->_vector_array[this->_size_vector_array] = x;
			++this->_size_vector_array;
		};
        void pop_back(){
			if (this->_size_vector_array >= 0) {
				this->_size_vector_array--;
				this->_alloc.destroy(this->_vector_array + this->_size_vector_array);
			}
		};
        //iterator insert(const_iterator position, const value_type &x){};
        //iterator insert(const_iterator position, size_type n, const value_type &x){};
        //iterator insert(const_iterator position, initializer_list <value_type> il){};
        //iterator erase(const_iterator position){};
        //iterator erase(const_iterator first, const_iterator last){};
        void clear() {
			this->_alloc.destroy(this->_vector_array);
			_size_vector_array = 0;
		};
        void resize(size_type sz){
			_reserve_vector(sz);
			_size_vector_array = sz;
		};
        void resize(size_type sz, const value_type &c){
			size_t diff_tmp = _size_vector_array;
			_reserve_vector(sz);
			if (sz > diff_tmp) {
				for (size_t i = diff_tmp; i < sz; ++i) {
					_vector_array[i] = c;
				}
			}
			_size_vector_array = sz;
		};
        void swap(vector &other){
			ft::vector<int> tmp;
			tmp = other;
			other = this;
			this = tmp;
		};
        bool __invariants() const{};
		//template<class InputIterator>iterator insert(const_iterator position, InputIterator first, InputIterator last){};
	private:
		T* _vector_array;
		size_type _size_vector_array;
		size_type _capacity_vector_array;
		size_type _max_size_vertor_array;
		Allocator _alloc;
		void _realloc(size_type n){
			pointer tmp;
			tmp = _alloc.allocate(n);
			if (tmp == 0)
				throw std::bad_alloc();
			if (n < _size_vector_array) {
				_size_vector_array = n;
				for (size_type i = 0; i < n; i++) {
					tmp[i] = _vector_array[i];
				}
			} else {
				for (size_type i = 0; i < _size_vector_array; i++) {
					tmp[i] = _vector_array[i];
				}
			}
			if (n != -1)
				_alloc.deallocate(_vector_array, _size_vector_array);
			_vector_array = tmp;
			_capacity_vector_array = n;
		};
		void _reserve_vector(size_type n){
			if (n >= capacity()) {
				const size_type _ms = max_size();
				if (n + 1 > _ms)
					return;
				const size_type _cap = capacity();
				if (_cap >= _ms / 2)
					reserve(_ms);
				else
					reserve(_VSTD::max(2*_cap, n + 1));
			}
		}
    };

}
#endif //FT_CONTAINERS_VECTOR_HPP
