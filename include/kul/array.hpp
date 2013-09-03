/* Copyright 2013, Garbanzo Prime

    This file is part of kul.
    kul is subject to the license specified in LICENSE.txt
*/
#ifndef KUL_ARRAY_26796fcf_1db6_43a3_827b_93f5957f76fc
#define KUL_ARRAY_26796fcf_1db6_43a3_827b_93f5957f76fc

#include "./cstddef.hpp"

namespace kul {
	template< typename T , size_t N >
	class array {
	public:
		using value_type      = T ;
		using size_type       = size_t ;
		using difference_type = ptrdiff_t ;
		using reference       = T & ;
		using const_reference = T const & ;
		using pointer         = T * ;
		using const_pointer   = T const * ;
		using iterator        = T * ;
		using const_iterator  = T const * ;
	
		iterator begin() noexcept {
			return _data ;
		}

		const_iterator begin() const noexcept {
			return _data ;
		}

		const_iterator cbegin() const noexcept {
			return _data ;
		}

		iterator end() noexcept {
			return _data + N ;
		}
		
		const_iterator end() const noexcept {
			return _data + N ;
		}

		const_iterator cend() const noexcept {
			return _data + N ;
		}

		reference operator[]( size_t idx ) noexcept {
			return _data[ idx ] ;
		}

		const_reference operator[]( size_t idx ) const noexcept {
			return _data[ idx ] ;
		}

		reference at( size_t idx ) noexcept {
			return _data[ idx ] ;
		}

		const_reference at( size_t idx ) const noexcept {
			return _data[ idx ] ;
		}

		pointer data() noexcept {
			return _data ; 
		}

		const_pointer data() const noexcept { 
			return _data ; 
		}

		bool empty() const noexcept {
			return N > 0 ;
		}

		size_type size() const noexcept {
			return N ;
		}

		//this is public only so that initializer-list based construction works...
		T _data[N] ;
	} ;
}

#undef