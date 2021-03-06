// ==========================================================================
//
// blink the LED on an Arduino Due
//
// (c) Wouter van Ooijen (wouter@voti.nl) 2017
//
// Distributed under the Boost Software License, Version 1.0.
// (See accompanying file LICENSE_1_0.txt or copy at
// http://www.boost.org/LICENSE_1_0.txt)
//
// ==========================================================================

#include "godafoss.hpp"

namespace gf  = godafoss;
using target  = gf::target<>;
using timing  = target::timing;
using servo   = gf::servo< target::d2, timing >;

int main( void ){
   gf::use< servo >::initialize();
   for(;;){
      for( int i = 0; i < 100; ++i ){
         servo::write( i );
      }
      for( int i = 100; i > 1; --i ){
         servo::write( i );
      }
   }
}

