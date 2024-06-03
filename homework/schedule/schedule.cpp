#include "schedule.hpp"

void schedule(std::function<void()> func, std::chrono::seconds sec) {
    std::this_thread::sleep_for(sec);
    func();
}
void schedule(std::function<void(int)> func, std::chrono::seconds sec, int a) {
    std::this_thread::sleep_for(sec);
    func(a);
}
void schedule(std::function<void(std::string, double)> func, std::chrono::seconds sec, std::string str, double a) {
    std::this_thread::sleep_for(sec);
    func(str, a);
}
