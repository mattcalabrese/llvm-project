//===----------------------------------------------------------------------===//
//
// Part of the LLVM Project, under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

// <thread>

// class thread
//     template <class _Fp, class ..._Args,
//         explicit thread(_Fp&& __f, _Args&&... __args);
//  This constructor shall not participate in overload resolution
//       if decay<F>::type is the same type as std::thread.


#include <thread>
#include <cassert>

int main()
{
    volatile std::thread t1;
    std::thread t2 ( t1, 1, 2.0 );
}
