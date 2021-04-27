#pragma once
#include <deque>
#include "xrCore/xrMemory.h"

template <typename T, typename allocator = tbb::tbb_allocator<T>>
using xr_deque = std::deque<T, allocator>;

#define DEF_DEQUE(N, T)\
    using N = xr_deque<T>;\
    using N##_it = N::iterator;

#define DEFINE_DEQUE(T, N, I)\
    using N = xr_deque<T>;\
    using I = N::iterator;
