/* Copyright 2013, Garbanzo Prime

    This file is part of kul.
    kul is subject to the license specified in LICENSE.txt
*/
#ifndef KUL_LIMITS_3827f493_c35e_4dbf_b150_cba03c25ceab
#define KUL_LIMITS_3827f493_c35e_4dbf_b150_cba03c25ceab

#include "./stdint.hpp"

namespace kul {
	template<typename _T>
	struct limits {
		static constexpr _T min() noexcept { return _T() ; }
		static constexpr _T max() noexcept { return _T() ; }
	} ;

	template<>
	struct limits<int8_t> {
		static constexpr int8_t min() noexcept { return 0x80 ; }
		static constexpr int8_t max() noexcept { return 0x7F ; }
	} ;

	template<>
	struct limits<uint8_t> {
		static constexpr uint8_t min() noexcept { return 0x0 ; }
		static constexpr uint8_t max() noexcept { return 0xFF ; }
	} ;

	template<>
	struct limits<uint16_t> {
		static constexpr uint16_t min() noexcept { return 0x0000 ; }
		static constexpr uint16_t max() noexcept { return 0XFFFF ; }
	} ;

	template<>
	struct limits<uint32_t> {
		static constexpr uint32_t min() noexcept { return 0x00000000 ; }
		static constexpr uint32_t max() noexcept { return 0xFFFFFFFF ; }
	} ;

	template<>
	struct limits<uint64_t> {
		static constexpr uint64_t min() noexcept { return 0x0000000000000000 ; }
		static constexpr uint64_t max() noexcept { return 0xFFFFFFFFFFFFFFFF ; }
	} ;
}
#endif