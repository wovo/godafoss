// ==========================================================================
//
// blink a LED on a DB103 board
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
using led     = target::p1_3;
using timing  = target::timing;

int main( void ){   
   gf::blink< led, timing::ms< 200 > >();   
}


