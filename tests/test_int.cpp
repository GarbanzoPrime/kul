#include "kul/stdint.hpp"

//compile time validations
static_assert( sizeof( kul::int8_t ) == 1 , "unexpected type size" ) ;
static_assert( sizeof( kul::int16_t ) == 2 , "unexpected type size" ) ;
static_assert( sizeof( kul::int32_t ) == 4 , "unexpected type size" ) ;
static_assert( sizeof( kul::int64_t ) == 8 , "unexpected type size" ) ;

static_assert( sizeof( kul::int_fast8_t ) >= 1 , "unexpected type size" ) ;
static_assert( sizeof( kul::int_fast16_t ) >= 2 , "unexpected type size" ) ;
static_assert( sizeof( kul::int_fast32_t ) >= 4 , "unexpected type size" ) ;
static_assert( sizeof( kul::int_fast64_t ) >= 8 , "unexpected type size" ) ;

static_assert( sizeof( kul::int_least8_t ) >= 1 , "unexpected type size" ) ;
static_assert( sizeof( kul::int_least16_t ) >= 2 , "unexpected type size" ) ;
static_assert( sizeof( kul::int_least32_t ) >= 4 , "unexpected type size" ) ;
static_assert( sizeof( kul::int_least64_t ) >= 8 , "unexpected type size" ) ;

static_assert( sizeof( kul::uint8_t ) == 1 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint16_t ) == 2 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint32_t ) == 4 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint64_t ) == 8 , "unexpected type size" ) ;

static_assert( sizeof( kul::uint_fast8_t ) >= 1 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint_fast16_t ) >= 2 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint_fast32_t ) >= 4 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint_fast64_t ) >= 8 , "unexpected type size" ) ;

static_assert( sizeof( kul::uint_least8_t ) >= 1 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint_least16_t ) >= 2 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint_least32_t ) >= 4 , "unexpected type size" ) ;
static_assert( sizeof( kul::uint_least64_t ) >= 8 , "unexpected type size" ) ;

static_assert( sizeof( kul::intptr_t ) == sizeof( void * ) , "unexpected type size" ) ;
static_assert( sizeof( kul::uintptr_t ) == sizeof( void * ) , "unexpected type size" ) ;
