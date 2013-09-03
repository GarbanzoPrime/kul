/* Copyright 2013, Garbanzo Prime

    This file is part of kul.
    kul is subject to the license specified in LICENSE.txt
*/
#ifndef KUL_MOVE_abdad250_7326_432c_8e6e_b829bff82938
#define KUL_MOVE_abdad250_7326_432c_8e6e_b829bff82938

#include "./type_traits.hpp"

namespace kul {
	template<typename T> constexpr 
	typename remove_reference<T>::type&& move(T && val) noexcept { 
		return static_cast<typename remove_reference<T>::type&&>(val); 
	}
}

#endif