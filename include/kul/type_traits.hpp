/* Copyright 2013, Garbanzo Prime

    This file is part of kul.
    kul is subject to the license specified in LICENSE.txt
*/
#ifndef KUL_TYPE_TRAITS_93ad8c4a_731e_4965_bcb3_fb1615064325
#define KUL_TYPE_TRAITS_93ad8c4a_731e_4965_bcb3_fb1615064325

namespace kul {

	template<typename T>
    struct remove_reference { 
		typedef T type; 
	};

	template<typename T>
    struct remove_reference<T&> { 
		typedef T type; 
	};

	template<typename T>
    struct remove_reference<T&&> { 
		typedef T type; 
	};
}

#endif