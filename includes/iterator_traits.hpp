//
// Created by Ander Amorin sanchez on 1/22/23.
//

#ifndef FT_CONTAINERS_ITERATOR_TRAITS_HPP
#define FT_CONTAINERS_ITERATOR_TRAITS_HPP

namespace ft {
	template<class Iterator>
	struct iterator_traits
	{
		typedef typename Iterator::difference_type difference_type;
		typedef typename Iterator::value_type value_type;
		typedef typename Iterator::pointer pointer;
		typedef typename Iterator::reference reference;
		typedef typename Iterator::iterator_category iterator_category;
	};

	template<class T>
	struct iterator_traits<T*>
	{
		typedef ptrdiff_t difference_type;
		typedef T value_type;
		typedef T* pointer;
		typedef T& reference;
		typedef std::random_access_iterator_tag iterator_category;
	};

	template<class Category, class T, class Distance = ptrdiff_t,
			class Pointer = T*, class Reference = T&>
	struct iterator
	{
		typedef T         value_type;
		typedef Distance  difference_type;
		typedef Pointer   pointer;
		typedef Reference reference;
		typedef Category  iterator_category;
	};

	template <class Iterator>
	class reverse_iterator
			: public iterator<typename iterator_traits<Iterator>::iterator_category,
					typename iterator_traits<Iterator>::value_type,
					typename iterator_traits<Iterator>::difference_type,
					typename iterator_traits<Iterator>::pointer,
					typename iterator_traits<Iterator>::reference>
	{
	protected:
		Iterator current;
	public:
		typedef Iterator                                            iterator_type;
		typedef typename iterator_traits<Iterator>::difference_type difference_type;
		typedef typename iterator_traits<Iterator>::reference       reference;
		typedef typename iterator_traits<Iterator>::pointer         pointer;

		reverse_iterator(){};
		explicit reverse_iterator(Iterator x){};
		template <class U> explicit reverse_iterator(const reverse_iterator<U>& u){};
		template <class U> reverse_iterator& operator=(const reverse_iterator<U>& u){};
		Iterator base() const{};
		reference operator*() const{};
		pointer   operator->() const{};
		reverse_iterator& operator++(){};
		reverse_iterator  operator++(int){};
		reverse_iterator& operator--(){};
		reverse_iterator  operator--(int){};
		reverse_iterator  operator+ (difference_type n) const{};
		reverse_iterator& operator+=(difference_type n){};
		reverse_iterator  operator- (difference_type n) const{};
		reverse_iterator& operator-=(difference_type n){};
		reference         operator[](difference_type n) const{};
	};
}
#endif //FT_CONTAINERS_ITERATOR_TRAITS_HPP
