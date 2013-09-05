/* Copyright 2013, Garbanzo Prime

    This file is part of kul.
    kul is subject to the license specified in LICENSE.txt
*/
#ifndef KUL_STDINT_b09a6ddf_47aa_4f0e_a0bc_7ada0a4f7a3f
#define KUL_STDINT_b09a6ddf_47aa_4f0e_a0bc_7ada0a4f7a3f

#include "./config.hpp"

namespace kul {
	//signed integer types
	using int8_t  = char ;
	using int16_t = short ;
	using int32_t = int ;
	using int64_t = long long ;

	using int_fast8_t  = char ;
	using int_fast16_t = short ;
	using int_fast32_t = int ;
	using int_fast64_t = long long ;

	using int_least8_t  = char ;
	using int_least16_t = short ;
	using int_least32_t = int ;
	using int_least64_t = long long ;

	using intmax_t = long long ;
	

	//unsigned integer types
	using uint8_t  = unsigned char ;
	using uint16_t = unsigned short ;
	using uint32_t = unsigned int ;
	using uint64_t = unsigned long long ;

	using uint_fast8_t  = unsigned char ;
	using uint_fast16_t = unsigned short ;
	using uint_fast32_t = unsigned int ;
	using uint_fast64_t = unsigned long long ;

	using uint_least8_t  = unsigned char ;
	using uint_least16_t = unsigned short ;
	using uint_least32_t = unsigned int ;
	using uint_least64_t = unsigned long long ;

	using uintmax_t = unsigned long long ;


#ifdef _KUL_64_BIT
	using intptr_t = int64_t ;
	using uintptr_t = uint64_t ;
#elif defined( _KUL_32_BIT )
	using intptr_t = int32_t ;
	using uintptr_t = uint32_t ;
#endif

	using size_t = uintptr_t ;
	using ptrdiff_t = intptr_t ;

}

#endif
