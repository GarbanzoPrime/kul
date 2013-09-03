/* Copyright 2013, Garbanzo Prime

    This file is part of kul.
    kul is subject to the license specified in LICENSE.txt
*/
#ifndef KUL_MEMORY_53cb7b2f_ab5b_48f0_88bf_0165498cbfc5
#define KUL_MEMORY_53cb7b2f_ab5b_48f0_88bf_0165498cbfc5

#include "./cstdint.hpp"

namespace kul {
	template< typename T >
	class MemoryLocation {
	public:
		constexpr MemoryLocation( uintptr_t loc ) : _location( loc ) {
		}

		
		void set( T const & val ) const {
			T * loc = reinterpret_cast<T*>(_location);
    			asm volatile("str %[val], [%[loc]]"
			     : : [loc]"r"(loc), [val]"r"(val));
		}

		T get() const {
			T *loc = reinterpret_cast<T*>(_location);
			T res ;
			asm volatile("ldr %[res], [%[loc]]"
			 : [res]"=r"(res) : [loc]"r"(loc));
			return res ;
		}

		constexpr uintptr_t operator+( uintptr_t offset ) const { 
			return _location + offset ; 
		} 
	
	private:
		uintptr_t _location ;
	} ;

	using MemReg = MemoryLocation< uint32_t > ;
}

#endif