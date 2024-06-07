#pragma once
#include <chrono>
#include <functional>
#include <string>
#include <thread>

template <typename Func, typename... A>
void schedule( Func func, std::chrono::seconds sec, A... a ){
    std::this_thread::sleep_for( sec );
    func(a...);
}
